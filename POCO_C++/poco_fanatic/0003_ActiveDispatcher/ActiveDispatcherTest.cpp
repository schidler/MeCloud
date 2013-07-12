//
//  ActiveDispatcherTest.cpp
//
//  Created  by Setsu on 4/21/10.
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
#include <Poco/ActiveMethod.h>
#include <Poco/ActiveDispatcher.h>
#include <Poco/ActiveResult.h>
#include <Poco/Format.h>
#include <Poco/Random.h>

#include <deque>

#include "ScopedLogMessage.h"
#include "PrepareConsoleLogger.h"

//----------------------------------------
//	MultiplierData
//----------------------------------------
struct MultiplierData
{
	int					threadID;
	int					callCount;
	std::pair<int, int>	source;
	int					result;

	MultiplierData()
	{
		threadID		= 0;
		callCount		= 0;
		source.first	= 0;
		source.second	= 0;
		result			= 0;
	}
};

//----------------------------------------
//	ActiveMultiplierDispatcher
//		uses ActiveDispatcher
//----------------------------------------
class ActiveMultiplierDispatcher : public Poco::ActiveDispatcher
{
public:
	ActiveMultiplierDispatcher() :
		multiply(this, &ActiveMultiplierDispatcher::multiplyImpl)
	,	m_callCount(0)
 	,	m_msg(" ActiveMultiplierDispatcher ", "start", "end")
	{
	}

	Poco::ActiveMethod<MultiplierData, MultiplierData,
						ActiveMultiplierDispatcher, Poco::ActiveStarter<Poco::ActiveDispatcher> > multiply;

protected:
	// Single Threaded Execution pattern
	MultiplierData multiplyImpl(const MultiplierData& args)
	{
		ScopedLogMessage msg(" ActiveMultiplierDispatcher::multiplyImpl ", "start", "end");

		++m_callCount;
		msg.Message(	Poco::format("  ActiveMultiplierDispatcher::multiply(%d*%d) invoked from thread[%d] [callCount=%d]"
									,	args.source.first
									,	args.source.second
									,	args.threadID
									,	m_callCount)	);

		// simulate time consuming job
		Poco::Thread::sleep(500);	// 500mSec

		MultiplierData rtn = args;
		rtn.callCount = m_callCount;
		rtn.result = args.source.first * args.source.second;

		return rtn;
	}

	int					m_callCount;
	ScopedLogMessage	m_msg;
};

//----------------------------------------
//	PrepareMultiplierData
//----------------------------------------
MultiplierData PrepareMultiplierData(Poco::Random& random)
{
	MultiplierData data;

	Poco::Thread* p_thread = Poco::Thread::current();
	data.threadID		= (0 == p_thread) ? 0:p_thread->id();
	data.source.first	= std::abs(random.nextChar() % 10);
	data.source.second	= std::abs(random.nextChar() % 10);
	return data;
}

//----------------------------------------
//	main
//----------------------------------------
int main(int /*argc*/, char** /*argv*/)
{
	PrepareConsoleLogger logger(Poco::Logger::ROOT, Poco::Message::PRIO_INFORMATION);

	ScopedLogMessage msg("ActiveDispatcherTest ", "start", "end");

	Poco::Random random;

	std::deque< Poco::ActiveResult<MultiplierData> > activeResults;

	ActiveMultiplierDispatcher multiplier;

	const int kNumMutiplier = 2;
	for(int i=0; i<kNumMutiplier; ++i)
	{
		// Future pattern
		activeResults.push_back(multiplier.multiply(PrepareMultiplierData(random)));
	}

	// some other task can be done here
	msg.Message("  doing something...");

	while(0 != activeResults.size())
	{
		Poco::ActiveResult<MultiplierData>& result = activeResults.front();
		result.wait();
		msg.Message(	Poco::format("  ActiveMultiplierDispatcher::multiply(%d*%d) result=%d [callCount=%d]"
									,	result.data().source.first
									,	result.data().source.second
									,	result.data().result
									,	result.data().callCount)	);
		activeResults.pop_front();
	}

	return 0;
}
