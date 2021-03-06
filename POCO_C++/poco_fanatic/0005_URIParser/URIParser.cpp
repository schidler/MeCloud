//
//  URIParser.cpp
//
//  Created by Setsu on 4/26/10.
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
#include "URIParser.h"

#include <Poco/URI.h>
#include <Poco/StringTokenizer.h>

//----------------------------------------
//	URIParserImpl
//----------------------------------------
class URIParser::URIParserImpl : public Poco::URI
{
public:
	URIParserImpl(const std::string& urlStr) :
		Poco::URI(urlStr)
	{
	}
	~URIParserImpl()
	{
	}
	void getQueryMap(std::map<std::string, std::string>& keyValues) const
	{
		if(empty())	return;

		std::string queryString(getQuery());
		if("" == queryString)	return;

		Poco::StringTokenizer restTokenizer(queryString, "&");
		for(Poco::StringTokenizer::Iterator itr=restTokenizer.begin(); itr!=restTokenizer.end(); ++itr)
		{
			Poco::StringTokenizer keyValueTokenizer(*itr, "=");
			keyValues[keyValueTokenizer[0]] = (1 < keyValueTokenizer.count()) ? keyValueTokenizer[1]:"";
		}
	}

private:
	URIParserImpl();
	URIParserImpl(const URIParserImpl&);
	URIParserImpl& operator = (const URIParserImpl&);
};

//----------------------------------------
//	URIParser
//----------------------------------------
URIParser::URIParser(const std::string& urlStr) :
	m_pImpl(new URIParserImpl(urlStr))
{
}

URIParser::~URIParser()
{
}

const std::string& URIParser::getScheme() const
{
	return m_pImpl->getScheme();
}

const std::string& URIParser::getUserInfo() const
{
	return m_pImpl->getUserInfo();
}

const std::string& URIParser::getHost() const
{
	return m_pImpl->getHost();
}

unsigned short URIParser::getPort() const
{
	return m_pImpl->getPort();
}

std::string URIParser::getAuthority() const
{
	return m_pImpl->getAuthority();
}

const std::string& URIParser::getPath() const
{
	return m_pImpl->getPath();
}

std::string URIParser::getQuery() const
{
	return m_pImpl->getQuery();
}

const std::string& URIParser::getFragment() const
{
	return m_pImpl->getFragment();
}

void URIParser::getPathSegments(std::vector<std::string>& segments)
{
	m_pImpl->getPathSegments(segments);
}

void URIParser::getQueryMap(std::map<std::string, std::string>& keyValues) const
{
	m_pImpl->getQueryMap(keyValues);
}
