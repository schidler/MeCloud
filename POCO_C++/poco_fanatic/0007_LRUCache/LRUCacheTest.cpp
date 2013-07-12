//
//  LRUCacheTest.cpp
//
//  Created  by Setsu on 4/29/10.
//  Modified by Setsu on May 30, 2013.
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
#include <Poco/Format.h>
#include <Poco/Buffer.h>
#include <Poco/Thread.h>
#include <Poco/LRUCache.h>

#include "ScopedElapsedTime.h"
#include "PrepareConsoleLogger.h"

//----------------------------------------
//	SlowBuffer
//----------------------------------------
template <class TKey, class TValue>
class SlowBuffer : public Poco::Buffer<TValue>
{
public:
	SlowBuffer(std::size_t size, long writeDelayMSec, long readDelayMSec) :
		Poco::Buffer<TValue>(size)
	,	m_writeDelayMSec(writeDelayMSec)
	,	m_readDelayMSec(readDelayMSec)
	{
	}

virtual
	~SlowBuffer()
	{
	}

virtual
	void write(TKey index, TValue val)
	{
		Poco::Thread::sleep(m_writeDelayMSec);
		(*this)[index] = val;
	}

virtual
	TValue& read(TKey index)
	{
		Poco::Thread::sleep(m_readDelayMSec);
		return (*this)[index];
	}

private:
	const long	m_writeDelayMSec;
	const long	m_readDelayMSec;
};

//----------------------------------------
//	CachedSlowBuffer
//----------------------------------------
template <class TKey, class TValue>
class CachedSlowBuffer : public SlowBuffer<TKey, TValue>, public Poco::LRUCache<TKey, TValue>
{
public:
	CachedSlowBuffer(std::size_t size, long writeDelayMSec, long readDelayMSec) :
		SlowBuffer<TKey, TValue>(size, writeDelayMSec, readDelayMSec)
	,	Poco::LRUCache<TKey, TValue>()
	{
	}

	~CachedSlowBuffer()
	{
	}

	void write(TKey index, TValue val)
	{
		Poco::LRUCache<TKey, TValue>::add(index, val);
		SlowBuffer<TKey, TValue>::write(index, val);
	}

	TValue& read(TKey index)
	{
		if(Poco::LRUCache<TKey, TValue>::has(index))
		{
			return *(Poco::LRUCache<TKey, TValue>::get(index));
		}
		else
		{
			TValue& val = SlowBuffer<TKey, TValue>::read(index);
			Poco::LRUCache<TKey, TValue>::add(index, val);
			return val;
		}
	}
};

//----------------------------------------
//	WriteReadTest
//----------------------------------------
template <class TKey, class TValue>
void WriteReadTest(SlowBuffer<TKey, TValue>& buffer, std::size_t bufferSize, const std::string& name)
{
	{
		ScopedElapsedTime msg(Poco::format("write %s (addr inc) ", name), "start", "end");

		TValue val = 0;
		for(TKey i=0; i<bufferSize; ++i)
		{
			buffer.write(i, val++);
		}
	}
	{
		ScopedElapsedTime msg(Poco::format("read  %s (addr dec) ", name), "start", "end");

		for(TKey i=bufferSize; i!=0; --i)
		{
			/*unsigned long data =*/ buffer.read(i-1);
		}
	}
	{
		ScopedElapsedTime msg(Poco::format("read  %s (addr   0) ", name), "start", "end\n");

		for(TKey i=0; i<bufferSize; ++i)
		{
			/*unsigned long data =*/ buffer.read(0);
		}
	}
}

//----------------------------------------
//	main
//----------------------------------------
int main(int /*argc*/, char** /*argv*/)
{
	PrepareConsoleLogger logger(Poco::Logger::ROOT, Poco::Message::PRIO_INFORMATION);

	const std::size_t kBufferSize	= 256;
	const long kWriteDelayMSec		= 3;
	const long kReadDelayMSec		= 3;

	SlowBuffer<std::size_t, unsigned long> slowBuffer(kBufferSize, kWriteDelayMSec, kReadDelayMSec);
	WriteReadTest(slowBuffer, kBufferSize, "SlowBuffer");

	CachedSlowBuffer<std::size_t, unsigned long> cachedSlowBuffer(kBufferSize, kWriteDelayMSec, kReadDelayMSec);
	WriteReadTest(cachedSlowBuffer, kBufferSize, "CachedSlowBuffer");

	return 0;
}
