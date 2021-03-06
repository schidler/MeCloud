//
//  MemoryPoolTest.cpp
//
//  Created  by Setsu on 6/13/2010.
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
#include <Poco/Format.h>
#include <Poco/MemoryPool.h>
#include <Poco/Stopwatch.h>
#include <Poco/Void.h>

#include <string>

#include "ScopedLogMessage.h"
#include "PrepareConsoleLogger.h"

//----------------------------------------
//	const
//----------------------------------------
const std::size_t kBlockSize = 256;
const int kNumMaxAlloc_Basics = 4;
const int kNumMaxAlloc_Speed = 1024*1024;
const std::size_t kNumLoop = 3;

//----------------------------------------
//	struct
//----------------------------------------
typedef struct
{
	double timeTotal;
	double timeInit;
	double timeCleanup;
	double timeAlloc[kNumLoop];
	double timeDealloc[kNumLoop];
} ElapsedTimeRec;

//----------------------------------------
//	ShowMemoryPoolAttr
//----------------------------------------
void ShowMemoryPoolAttr(ScopedLogMessage& msg, const Poco::MemoryPool& pool)
{
	msg.Message(Poco::format("  blockSize()=%z, allocated()=%d, available()=%d", pool.blockSize(), pool.allocated(), pool.available()));
}

//----------------------------------------
//	TestBasics
//----------------------------------------
void TestBasics(ScopedLogMessage& msg)
{
	msg.Message("--- TestBasics ---");

	Poco::MemoryPool pool(kBlockSize, 0, kNumMaxAlloc_Basics);
	msg.Message(Poco::format(" Poco::MemoryPool(%z, %d, %d)", kBlockSize, 0, kNumMaxAlloc_Basics));
	ShowMemoryPoolAttr(msg, pool);

	std::vector<void*> ptrs;
	msg.Message(" pool.get()");
	for(int i=0; i<kNumMaxAlloc_Basics; ++i)
	{
		ptrs.push_back(pool.get());
		ShowMemoryPoolAttr(msg, pool);
	}
	try
	{
		pool.get();
	}
	catch(Poco::OutOfMemoryException&)
	{
		msg.Message(Poco::format(" calling pool.get() more than %d fails", kNumMaxAlloc_Basics));
	}
	msg.Message(" pool.release()");
	for(int i=0; i<kNumMaxAlloc_Basics; ++i)
	{
		pool.release(ptrs[i]);
		ShowMemoryPoolAttr(msg, pool);
	}
	msg.Message(" pool.get() again");
	for(int i=0; i<kNumMaxAlloc_Basics; ++i)
	{
		ptrs.push_back(pool.get());
		ShowMemoryPoolAttr(msg, pool);
	}
}

//----------------------------------------
//	MeasureAllocDeallocTime
//----------------------------------------
template <class T>
class MeasureAllocDeallocTime
{
public:
	MeasureAllocDeallocTime(ElapsedTimeRec& timeRec, std::size_t blockSize, int preAlloc, int maxAlloc) :
		m_pPool		(NULL)
	{
		std::vector<char*> ptrs(maxAlloc);
		{
			Poco::Stopwatch sw_total;
			sw_total.start();
			{	// initialize
				Poco::Stopwatch sw_init;
				sw_init.start();
				Init(blockSize, preAlloc, maxAlloc);
				sw_init.stop();
				timeRec.timeInit = (1000.0 * sw_init.elapsed()) / sw_init.resolution();
			}
			for(std::size_t loop=0; loop<kNumLoop; ++loop)
			{
				{	// allocate
					Poco::Stopwatch sw_alloc;
					sw_alloc.start();
					for(int i=0; i<maxAlloc; ++i)
					{
						ptrs[i] = Alloc(blockSize);
					}
					sw_alloc.stop();
					timeRec.timeAlloc[loop] = (1000.0 * sw_alloc.elapsed()) / sw_alloc.resolution();
				}
				{	// deallocate
					Poco::Stopwatch sw_dealloc;
					sw_dealloc.start();
					for(int i=0; i<maxAlloc; ++i)
					{
						Dealloc(ptrs[i]);
					}
					sw_dealloc.stop();
					timeRec.timeDealloc[loop] = (1000.0 * sw_dealloc.elapsed()) / sw_dealloc.resolution();
				}
			}
			{	// cleanup
				Poco::Stopwatch sw_cleanup;
				sw_cleanup.start();
				Cleanup();
				sw_cleanup.stop();
				timeRec.timeCleanup = (1000.0 * sw_cleanup.elapsed()) / sw_cleanup.resolution();
			}
			sw_total.stop();
			timeRec.timeTotal = (1000.0 * sw_total.elapsed()) / sw_total.resolution();
		}
	}
	~MeasureAllocDeallocTime()
	{
	}

private:
	MeasureAllocDeallocTime() :
		m_pPool		(NULL)
	{
	}
	void Init(std::size_t /*blockSize*/, int /*preAlloc*/, int /*maxAlloc*/)
	{
	}
	void Cleanup(void)
	{
	}
	char* Alloc(std::size_t blockSize)
	{
		return new char[blockSize];
	}
	void Dealloc(char* ptr)
	{
		delete [] ptr;
	}

	T*	m_pPool;
};

template <>
void MeasureAllocDeallocTime<Poco::MemoryPool>::Init(std::size_t blockSize, int preAlloc, int maxAlloc)
{
	m_pPool = new Poco::MemoryPool(blockSize, preAlloc, maxAlloc);
}
template <>
void MeasureAllocDeallocTime<Poco::MemoryPool>::Cleanup(void)
{
	if(NULL != m_pPool)
	{
		delete m_pPool;
		m_pPool = NULL;
	}
}
template <>
char* MeasureAllocDeallocTime<Poco::MemoryPool>::Alloc(std::size_t /*blockSize*/)
{
	return static_cast<char*>(m_pPool->get());
}
template <>
void MeasureAllocDeallocTime<Poco::MemoryPool>::Dealloc(char* ptr)
{
	m_pPool->release(ptr);
}

//----------------------------------------
//	TestSpeed
//----------------------------------------
#if defined(POCO_OS_FAMILY_WINDOWS)
#include <new.h>

int ThrowBadAlloc(std::size_t)
{
	throw std::bad_alloc();
	return 0;
}
#endif

void TestSpeed(ScopedLogMessage& msg)
{
ElapsedTimeRec timeRec[3];

	msg.Message("--- TestSpeed ---");

	int numMaxAlloc = kNumMaxAlloc_Speed;
	{	// adjust number of max allocation for low memory machine
		bool memoryAvailable = false;
		char* tempPtr = NULL;

#if defined(POCO_OS_FAMILY_WINDOWS)
		_set_new_handler(ThrowBadAlloc);
#endif

		while(!memoryAvailable)
		{
			try
			{
				tempPtr = new char [kBlockSize * numMaxAlloc];
				memoryAvailable = true;
			}
			catch(...)
			{
				numMaxAlloc /= 2;
			}
			delete [] tempPtr;
			tempPtr = NULL;
		}
		msg.Message(Poco::format(" number of allocation blocks = %d", numMaxAlloc));
	}

	{
		msg.Message(" measuring new/delete...");
		MeasureAllocDeallocTime<Poco::Void> measure(timeRec[0], kBlockSize, 0, numMaxAlloc);
	}
	{
		msg.Message(Poco::format(" measuring Poco::MemoryPool(%z, %d, %d)..."
								, kBlockSize
								, 0
								, numMaxAlloc));
		MeasureAllocDeallocTime<Poco::MemoryPool>
			measure(timeRec[1], kBlockSize, 0, numMaxAlloc);
	}
	{
		msg.Message(Poco::format(" measuring Poco::MemoryPool(%z, %d, %d)..."
								, kBlockSize
								, numMaxAlloc
								, numMaxAlloc));
		MeasureAllocDeallocTime<Poco::MemoryPool>
			measure(timeRec[2], kBlockSize, numMaxAlloc, numMaxAlloc);
	}

	msg.Message("                 new/delete   non pre-allocated   pre-allocated");
	msg.Message("================================================================");
	msg.Message(Poco::format("  init          %8.3fmSec    %8.3fmSec      %8.3fmSec"
								, timeRec[0].timeInit
								, timeRec[1].timeInit
								, timeRec[2].timeInit));
	for(std::size_t loop=0; loop<kNumLoop; ++loop)
	{
		msg.Message(Poco::format("  allocate #%z   %8.3fmSec    %8.3fmSec      %8.3fmSec"
								, loop+1
								, timeRec[0].timeAlloc[loop]
								, timeRec[1].timeAlloc[loop]
								, timeRec[2].timeAlloc[loop]));
		msg.Message(Poco::format("deallocate #%z   %8.3fmSec    %8.3fmSec      %8.3fmSec"
								, loop+1
								, timeRec[0].timeDealloc[loop]
								, timeRec[1].timeDealloc[loop]
								, timeRec[2].timeDealloc[loop]));
	}
	msg.Message(Poco::format("  cleanup       %8.3fmSec    %8.3fmSec      %8.3fmSec"
								, timeRec[0].timeCleanup
								, timeRec[1].timeCleanup
								, timeRec[2].timeCleanup));
	msg.Message("================================================================");
	msg.Message(Poco::format("  total time    %8.3fmSec    %8.3fmSec      %8.3fmSec"
								, timeRec[0].timeTotal
								, timeRec[1].timeTotal
								, timeRec[2].timeTotal));
}

//----------------------------------------
//	main
//----------------------------------------
int main(int /*argc*/, char** /*argv*/)
{
	PrepareConsoleLogger logger(Poco::Logger::ROOT, Poco::Message::PRIO_INFORMATION);

	ScopedLogMessage msg("MemoryPoolTest ", "start", "end");

	TestBasics(msg);
	TestSpeed(msg);

	return 0;
}
