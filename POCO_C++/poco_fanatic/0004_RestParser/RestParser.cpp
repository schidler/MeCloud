//
//  RestParser.cpp
//
//  Created by Setsu on 4/24/10.
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

//----------------------------------------
//	include
//----------------------------------------
#include "RestParser.h"

#include <Poco/StringTokenizer.h>

//----------------------------------------
//	RestParserImpl
//----------------------------------------
class RestParser::RestParserImpl : public Poco::StringTokenizer
{
public:
	RestParserImpl(const std::string& urlStr) :
		Poco::StringTokenizer(urlStr, "?")
	{
	}
	~RestParserImpl()
	{
	}
	int GetURL(std::string& url) const
	{
		if(!IsValidUrlWithRest())	return -1;

		url = (*this)[0];
		return 0;
	}
	int GetKeyValues(std::map<std::string, std::string>& keyValues) const
	{
		if(!IsValidUrlWithRest())	return -1;

		Poco::StringTokenizer restTokenizer((*this)[1], "&");
		for(Poco::StringTokenizer::Iterator itr=restTokenizer.begin(); itr!=restTokenizer.end(); ++itr)
		{
			Poco::StringTokenizer keyValueTokenizer(*itr, "=");
			keyValues[keyValueTokenizer[0]] = (1 < keyValueTokenizer.count()) ? keyValueTokenizer[1]:"";
		}
		return 0;
	}

private:
	RestParserImpl();
	RestParserImpl(const RestParserImpl&);
	RestParserImpl& operator = (const RestParserImpl&);

	bool IsValidUrlWithRest(void) const
	{
		return (2 == count());
	}
};

//----------------------------------------
//	RestParser
//----------------------------------------
RestParser::RestParser(const std::string& urlStr) :
	m_pImpl(new RestParserImpl(urlStr))
{
}

RestParser::~RestParser()
{
}

int RestParser::GetURL(std::string& url) const
{
	return m_pImpl->GetURL(url);
}

int RestParser::GetKeyValues(std::map<std::string, std::string>& keyValues) const
{
	return m_pImpl->GetKeyValues(keyValues);
}
