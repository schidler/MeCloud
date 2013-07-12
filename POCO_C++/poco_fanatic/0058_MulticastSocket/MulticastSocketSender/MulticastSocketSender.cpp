//
//  MulticastSocketSender.cpp
//
//  Created by Setsu on Feb 26, 2011.
//  Copyright 2011 RoundSquare Inc. All rights reserved.
//
// Permission is hereby granted, free of charge, to any person or organization
// obtaining a copy of the software and accompanying documentation covered by
// this license (the "Software") to use, reproduce, display, distribute,
// execute, and transmit the Software, and to prepare derivative works of the
// Software, and to permit third-parties to whom the Software is furnished to
// do so, all subject to the following:
// 
// The copyright notices in the Software and this entire statement, including
// the above license grant, this restriction and the following disclaimer,
// must be included in all copies of the Software, in whole or in part, and
// all derivative works of the Software, unless such copies or derivative
// works are solely in the form of machine-executable object code generated by
// a source language processor.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
// SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
// FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
//

//----------------------------------------
//	include
//----------------------------------------
#include <Poco/Util/ServerApplication.h>
#include <Poco/Task.h>
#include <Poco/TaskManager.h>
#include <Poco/Net/TCPServerConnection.h>
#include <Poco/Net/TCPServerConnectionFactory.h>
#include <Poco/Net/MulticastSocket.h>
#include <Poco/NumberFormatter.h>
#include <Poco/Net/NetworkInterface.h>
#include <Poco/Net/SocketAddress.h>
#include <Poco/Format.h>
#include <Poco/NumberParser.h>

#include <string>

//----------------------------------------
//	const
//----------------------------------------
const long	kWaitMSec(500);

//----------------------------------------
//	SenderTask
//----------------------------------------
class SenderTask: public Poco::Task
{
public:
	SenderTask(const std::vector<std::string>& args) :	// args[0]: MulticastAddress, args[1]: MulticastPort, args[2]: WaitingPort
		Poco::Task					("SenderTask")
	,	m_family					(Poco::Net::IPAddress(args[0]).family())
	,	m_port						(Poco::NumberParser::parseUnsigned(args[1]))
	,	m_waitingPort				(Poco::NumberParser::parseUnsigned(args[2]))
	,	m_multicastSocket			(Poco::Net::MulticastSocket(m_family))
	,	m_pMulticastSocketAddress	(NULL)
	{
	}

	~SenderTask()
	{
		if(NULL != m_pMulticastSocketAddress)
		{
			delete m_pMulticastSocketAddress;
		}
	}

	void runTask()
	{
		Poco::Logger& logger = Poco::Util::Application::instance().logger();

		std::string hostAddress;

		Poco::Net::NetworkInterface::NetworkInterfaceList list = Poco::Net::NetworkInterface::list();
		if(!list.empty())
		{
			for(Poco::Net::NetworkInterface::NetworkInterfaceList::const_iterator itr=list.begin(); itr!=list.end(); ++itr)
			{
				if(	!itr->address().isLoopback()
					&& (m_family == itr->address().family())
				#if !defined(POCO_OS_FAMILY_WINDOWS)
					&& ('e' == itr->name()[0])
				#endif
					)
				{
					hostAddress += itr->address().toString();
					if(Poco::Net::IPAddress::IPv6 == itr->address().family())
					{
						hostAddress += "%";
						hostAddress += itr->name();
					}
					logger.information(Poco::format("   SenderTask: %s:%hu", hostAddress, m_port));
					m_pMulticastSocketAddress = new Poco::Net::SocketAddress(hostAddress, m_port);
					break;
				}
			}
		}

		if(NULL != m_pMulticastSocketAddress)
		{
			while(!isCancelled())
			{
				m_multicastMessage = Poco::format(	"SenderTask?ipaddr=%s&port=%hu",
													hostAddress,
													m_waitingPort);
				std::size_t n = m_multicastSocket.sendTo(	m_multicastMessage.c_str(),
															static_cast<int>(m_multicastMessage.length()),
															*m_pMulticastSocketAddress	);
				if(n != m_multicastMessage.length())
				{
					logger.information("   SenderTask: send error");
				}
				sleep(kWaitMSec);
			}
		}
	}

private:
	Poco::Net::IPAddress::Family	m_family;
	Poco::UInt16					m_port;
	Poco::UInt16					m_waitingPort;
	Poco::Net::MulticastSocket		m_multicastSocket;
	Poco::Net::SocketAddress*		m_pMulticastSocketAddress;
	std::string						m_multicastMessage;
};

//----------------------------------------
//	MulticastSocketSender
//----------------------------------------
class MulticastSocketSender: public Poco::Util::ServerApplication
{
public:
	MulticastSocketSender()
	{
	}

protected:
	void initialize(Application& self)
	{
		loadConfiguration(); // load default configuration files, if present
		Poco::Util::ServerApplication::initialize(self);
		logger().information("   - MulticastSocketSender starting up");
	}
		
	void uninitialize()
	{
		logger().information("   - MulticastSocketSender shutting down");
		Poco::Util::ServerApplication::uninitialize();
	}

	int main(const std::vector<std::string>& args)
	{
		Poco::TaskManager tm;
		tm.start(new SenderTask(args));
		waitForTerminationRequest();
		tm.cancelAll();
		tm.joinAll();

		return Application::EXIT_OK;
	}
};

//----------------------------------------
//	entry point
//----------------------------------------
POCO_SERVER_MAIN(MulticastSocketSender)
