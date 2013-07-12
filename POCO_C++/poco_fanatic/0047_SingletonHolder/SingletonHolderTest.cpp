//
//  SingletonHolderTest.cpp
//
//  Created  by Setsu on 7/19/2010.
//  Modified by Setsu on May 30, 2013.
//  Copyright 2010-2013 RoundSquare Inc. All rights reserved.
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
#include <Poco/SingletonHolder.h>

#include <string>

#include "ScopedLogMessage.h"
#include "PrepareConsoleLogger.h"

//----------------------------------------
//	global
//----------------------------------------
ScopedLogMessage* g_pMsg = NULL;

//----------------------------------------
//	SingletonTarget
//----------------------------------------
class SingletonTarget
{
public:
	SingletonTarget()
	{
		if(NULL != g_pMsg)
		{
			g_pMsg->Message("  SingletonTarget created.");
		}
	}

	~SingletonTarget()
	{
		if(NULL != g_pMsg)
		{
			g_pMsg->Message("  SingletonTarget deleted.");
		}
	}

	void doSomething(void)
	{
		if(NULL != g_pMsg)
		{
			g_pMsg->Message("  SingletonTarget::doSomething called.");
		}
	}

private:
	SingletonTarget(const SingletonTarget&);
	SingletonTarget& operator = (const SingletonTarget&);
};

//----------------------------------------
//	ClassWithDefaultInstance
//----------------------------------------
class ClassWithDefaultInstance
{
public:
	ClassWithDefaultInstance()
	{
		if(NULL != g_pMsg)
		{
			g_pMsg->Message("  ClassWithDefaultInstance created.");
		}
	}

	~ClassWithDefaultInstance()
	{
		if(NULL != g_pMsg)
		{
			g_pMsg->Message("  ClassWithDefaultInstance deleted.");
		}
	}

	void doSomething(void)
	{
		if(NULL != g_pMsg)
		{
			g_pMsg->Message("  ClassWithDefaultInstance::doSomething called.");
		}
	}

	static ClassWithDefaultInstance& defaultInstance()
	{
		static Poco::SingletonHolder<ClassWithDefaultInstance> sh;
		return *sh.get();
	}

private:
	ClassWithDefaultInstance(const ClassWithDefaultInstance&);
	ClassWithDefaultInstance& operator = (const ClassWithDefaultInstance&);
};

//----------------------------------------
//	main
//----------------------------------------
int main(int /*argc*/, char** /*argv*/)
{
	PrepareConsoleLogger logger(Poco::Logger::ROOT, Poco::Message::PRIO_INFORMATION);

	ScopedLogMessage msg("SingletonHolderTest ", "start", "end");
	g_pMsg = &msg;

	{
		msg.Message(" --- SingletonTarget ---");
		Poco::SingletonHolder<SingletonTarget> singleton;
		singleton.get()->doSomething();
		singleton.get()->doSomething();
	}
	{
		msg.Message(" --- ClassWithDefaultInstance ---");
		ClassWithDefaultInstance::defaultInstance().doSomething();
		ClassWithDefaultInstance::defaultInstance().doSomething();
	}
	return 0;
}
