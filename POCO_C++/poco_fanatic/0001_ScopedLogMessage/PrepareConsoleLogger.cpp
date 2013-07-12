//
//  PrepareConsoleLogger.cpp
//
//  Created by Setsu on May 30, 2013.
//  Copyright 2013 RoundSquare Inc. All rights reserved.
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

//----------------------------------------
//	include
//----------------------------------------
#include "PrepareConsoleLogger.h"

//----------------------------------------
//	PrepareConsoleLogger
//----------------------------------------
PrepareConsoleLogger::PrepareConsoleLogger(const std::string& name, int level) :
	m_name				(name)
,	m_pConsoleChannel	(new Poco::ConsoleChannel)
,	m_pTextFormatter	(new Poco::PatternFormatter("%t"))
,	m_pFCConsole		(new Poco::FormattingChannel(m_pTextFormatter))
{
	m_pFCConsole->setChannel(m_pConsoleChannel);
	m_pFCConsole->open();

	Poco::Logger::create(m_name, m_pFCConsole, level);
}

PrepareConsoleLogger::~PrepareConsoleLogger()
{
	Poco::Logger::destroy(m_name);

	m_pFCConsole->close();
}
