//
//  SharedMemoryServer.cpp
//
//  Created by Setsu on 6/27/10.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
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
#include <Poco/SharedMemory.h>
#include <Poco/Format.h>
#include <Poco/Path.h>
#include <Poco/File.h>
#include <Poco/FileStream.h>
#ifndef POCO_VERSION
#include <Poco/Version.h>
#endif

#include <string>
#include <vector>

//----------------------------------------
//	const
//----------------------------------------
const std::string kSharedMemoryFileName("./MySharedMemory.txt");
const std::size_t kSharedMemorySize = 33;
const std::string kSharedMemoryName("MyTest");

//----------------------------------------
//	ServerTask
//----------------------------------------
class ServerTask: public Poco::Task
{
public:
	ServerTask() : Poco::Task("ServerTask")
	{
		Poco::Path path(kSharedMemoryFileName);
		m_File = Poco::File(path);
		if(!m_File.exists())
		{
			m_File.createFile();
			Poco::FileOutputStream ostr(m_File.path());
			for(std::size_t i=0; i<kSharedMemorySize; ++i)
			{
				ostr << ' ';
			}
		}
	}

	~ServerTask()
	{
		if(m_File.exists())
		{
			m_File.remove();
		}
	}
	
	void runTask()
	{
		Poco::Logger& logger = Poco::Util::Application::instance().logger();

#if (0x01040100 <= POCO_VERSION)
		Poco::SharedMemory sharedMemoryNamed(kSharedMemoryName, kSharedMemorySize, Poco::SharedMemory::AM_WRITE, 0, true);
#endif
		std::size_t loopCount = 0;
		while(!sleep(300))	// Poco::Task::sleep() should be called in favor of Thread::sleep()
		{
			Poco::SharedMemory sharedMemory(m_File, Poco::SharedMemory::AM_WRITE);
			for(std::size_t i=0; i<kSharedMemorySize; ++i)
			{
				sharedMemory.begin()[i] = static_cast<char>(('A' + loopCount + i) & 0x7F);
			}
			logger.information(Poco::format("ServerTask: %c - %c"
												, sharedMemory.begin()[0]
												, sharedMemory.end()[-1]));
#if (0x01040100 <= POCO_VERSION)
			for(std::size_t i=0; i<kSharedMemorySize; ++i)
			{
				sharedMemoryNamed.begin()[i] = static_cast<char>(('A' + loopCount + i) & 0x7F);
			}
			logger.information(Poco::format("ServerTask: %c - %c (named)"
												, sharedMemoryNamed.begin()[0]
												, sharedMemoryNamed.end()[-1]));
#endif
			++loopCount;
		}
	}

private:
	Poco::File	m_File;
};

//----------------------------------------
//	SharedMemoryServer
//----------------------------------------
class SharedMemoryServer: public Poco::Util::ServerApplication
{
public:
	SharedMemoryServer()
	{
	}

protected:
	void initialize(Application& self)
	{
		loadConfiguration(); // load default configuration files, if present
		Poco::Util::ServerApplication::initialize(self);
		logger().information("SharedMemoryServer starting up");
	}
		
	void uninitialize()
	{
		logger().information("SharedMemoryServer shutting down");
		Poco::Util::ServerApplication::uninitialize();
	}

	int main(const std::vector<std::string>& args)
	{
		Poco::TaskManager tm;
		tm.start(new ServerTask);
		waitForTerminationRequest();
		tm.cancelAll();
		tm.joinAll();

		return Application::EXIT_OK;
	}
};

//----------------------------------------
//	entry point
//----------------------------------------
POCO_SERVER_MAIN(SharedMemoryServer)
