//
//  ClassLoader ReadMe.txt
//
//  Created by Setsu on 7/25/10.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is ClassLoader?
//----------------------------------------
Message logging class which uses Poco::ClassLoader.
   http://pocoproject.org/docs/Poco.ClassLoader.html

//----------------------------------------
// Building on Linux
//----------------------------------------
1. bootstrap
     chmod +x bootstrap
     ./bootstrap
2. configure
    for debug build:
     CXXFLAGS="-g -D_DEBUG -Wall" ./configure --cache=/dev/null --prefix=/usr
    for release build:
     CXXFLAGS="-O2 -Wall" ./configure --cache=/dev/null --prefix=/usr
3. make
     make
     sudo make install

//----------------------------------------
// Building on Mac OS X
//----------------------------------------
1. bootstrap
     cat bootstrap | sed s/libtoolize/glibtoolize/ > bootstrap.mac
     chmod +x bootstrap.mac
     ./bootstrap.mac
2. configure
    for debug build:
     CXXFLAGS="-g -D_DEBUG -Wall" ./configure --cache=/dev/null --prefix=/usr
    for release build:
     CXXFLAGS="-O2 -Wall" ./configure --cache=/dev/null --prefix=/usr
3. make
     make
     sudo make install

//----------------------------------------
// Building on Windows
//  NOTE: Assuming environment variable POCO_BASE is properly defined.
//----------------------------------------
Open ClassLoaderTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for ClassLoaderTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
// On Linux
[0] ClassLoaderTest start
Plugin initializing
[0]  Size for manifest for "libPlugin.so": 3
[0]  PluginA created.
[0]   Poco::ClassLoader::instance() failed for non-singleton class.
[0]    (Invalid access "PluginA")
[0]  PluginB created.
[0]   Poco::ClassLoader::instance() failed for non-singleton class.
[0]    (Invalid access "PluginB")
[0]  PluginC instanciated.
Plugin uninitialzing
[0] ClassLoaderTest end

// On Macintosh OSX 10.6.4
[0] ClassLoaderTest start
Plugin initializing
[0]  Size for manifest for "libPlugin.dylib": 3
[0]  PluginA created.
[0]   Poco::ClassLoader::instance() failed for non-singleton class.
[0]    (Invalid access "PluginA")
[0]  PluginB created.
[0]   Poco::ClassLoader::instance() failed for non-singleton class.
[0]    (Invalid access "PluginB")
[0]  PluginC instanciated.
Plugin uninitialzing
[0] ClassLoaderTest end

// On Windows XP sp3
[0] ClassLoaderTest start
Plugin initializing
[0]  Size for manifest for "libPlugin.dll": 3
[0]  PluginA created.
[0]   Poco::ClassLoader::instance() failed for non-singleton class.
[0]    (Invalid access "PluginA")
[0]  PluginB created.
[0]   Poco::ClassLoader::instance() failed for non-singleton class.
[0]    (Invalid access "PluginB")
[0]  PluginC instanciated.
Plugin uninitialzing
[0] ClassLoaderTest end
