//
//  ClassLoaderTest.cpp
//
//  Created  by Setsu on 7/25/10.
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
#include <Poco/ClassLoader.h>

#include <string>

#include "ScopedLogMessage.h"
#include "PrepareConsoleLogger.h"
#include "../Plugin/Plugin.h"

//----------------------------------------
//	const
//----------------------------------------
const std::string kSharedLibraryName("libPlugin");

const std::string kPluginNameA("PluginA");	// Note that PluginA is declared as POCO_EXPORT_CLASS in manifest
const std::string kPluginNameB("PluginB");	// Note that PluginB is declared as POCO_EXPORT_CLASS in manifest
const std::string kPluginNameC("PluginC");	// Note that PluginC is declared as POCO_EXPORT_SINGLETON in manifest
const std::string kPluginNames[] = { kPluginNameA, kPluginNameB, kPluginNameC };

const std::size_t kNumPlugin = sizeof(kPluginNames)/sizeof(kPluginNames[0]);

//----------------------------------------
//	TestClassLoader
//----------------------------------------
void TestClassLoader(	ScopedLogMessage& msg
					,	Poco::ClassLoader<Plugin>& cl
					,	const std::string& pluginName)
{
	if(cl.canCreate(pluginName))
	{
		Plugin* pPlugin = cl.classFor(pluginName).create();
		msg.Message(Poco::format(" %s created.", pPlugin->name()));
		delete pPlugin;
	}

	try
	{
		Plugin& plugin = cl.instance(pluginName);
		msg.Message(Poco::format(" %s instanciated.", plugin.name()));
	}
	catch(Poco::InvalidAccessException& exc)
	{
		msg.Message("  Poco::ClassLoader::instance() failed for non-singleton class.");
		msg.Message(Poco::format("   (%s \"%s\")", std::string(exc.name()), pluginName));
	}
}

//----------------------------------------
//	main
//----------------------------------------
int main(int /*argc*/, char** /*argv*/)
{
	PrepareConsoleLogger logger(Poco::Logger::ROOT, Poco::Message::PRIO_INFORMATION);

	ScopedLogMessage msg("ClassLoaderTest ", "start", "end");

	std::string path(kSharedLibraryName);
	path.append(Poco::SharedLibrary::suffix());
	Poco::ClassLoader<Plugin> cl;
	try
	{
		cl.loadLibrary(path);
		if(cl.isLibraryLoaded(path))
		{
			msg.Message(Poco::format(" Size for manifest for \"%s\": %i", path, cl.manifestFor(path).size()));

			for(std::size_t i=0; i<kNumPlugin; ++i)
			{
				TestClassLoader(msg, cl, kPluginNames[i]);
			}

			cl.unloadLibrary(path);
		}
	}
	catch(Poco::LibraryLoadException& exc)
	{
		msg.Message(Poco::format(" %s \"%s\"", std::string(exc.name()), path));
	}

	return 0;
}
