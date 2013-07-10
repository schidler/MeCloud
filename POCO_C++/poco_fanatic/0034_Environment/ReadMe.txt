//
//  Environment ReadMe.txt
//
//  Created by Setsu on 6/24/10.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is Environment?
//----------------------------------------
Message logging class which uses Poco::Environment.
   http://pocoproject.org/docs/Poco.Environment.html

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

//----------------------------------------
// Building on Windows
//  NOTE: Assuming environment variable POCO_BASE is properly defined.
//----------------------------------------
Open EnvironmentTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for EnvironmentTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
// On Linux
[0] EnvironmentTest start
[0]           SHELL: /bin/bash
[0]       NOT_EXIST: NOT_EXIST_DEFAULT
[0]     has MANPATH: no
[0]          nodeId: 00:0c:29:13:da:fb
[0]          nodeId: 00:0c:29:13:da:fb
[0]        nodeName: debian
[0]  osArchitecture: i686
[0]          osName: Linux
[0]       osVersion: 2.6.26-2-686
[0]  processorCount: 1
[0] EnvironmentTest end

// On Macintosh OSX 10.6.4
[0] EnvironmentTest start
[0]           SHELL: /bin/bash
[0]       NOT_EXIST: NOT_EXIST_DEFAULT
[0]     has MANPATH: yes
[0]          nodeId: 00:16:cb:b0:aa:e4
[0]          nodeId: 00:16:cb:b0:aa:e4
[0]        nodeName: Mac-mini.local
[0]  osArchitecture: i386
[0]          osName: Darwin
[0]       osVersion: 10.4.0
[0]  processorCount: 2
[0] EnvironmentTest end

// On Windows XP sp3
[0] EnvironmentTest start
[0] Not found: SHELL
[0]       NOT_EXIST: NOT_EXIST_DEFAULT
[0]     has MANPATH: no
[0]          nodeId: 00:0c:29:ea:ce:98
[0]          nodeId: 00:0c:29:ea:ce:98
[0]        nodeName: SETSU-SHY3M0TG8
[0]  osArchitecture: IA32
[0]          osName: Windows NT
[0]       osVersion: 5.1 (Build 2600: Service Pack 3)
[0]  processorCount: 1
[0] EnvironmentTest end
