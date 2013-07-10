//
//  ActiveDispatcherTest ReadMe.txt
//
//  Created by Setsu on 4/22/10.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is ActiveDispatcherTest?
//----------------------------------------
Sample code which uses Poco::ActiveDispatcher.
   http://pocoproject.org/docs/Poco.ActiveDispatcher.html

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
Open ActiveDispatcherTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for ActiveDispatcherTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
[0] ActiveDispatcherTest start
[0]  ActiveMultiplierDispatcher start
[0]   doing something...
[1]  ActiveMultiplierDispatcher::multiplyImpl start
[1]   ActiveMultiplierDispatcher::multiply(7*7) invoked from thread[0] [callCount=1]
[1]  ActiveMultiplierDispatcher::multiplyImpl end
[1]  ActiveMultiplierDispatcher::multiplyImpl start
[0]   ActiveMultiplierDispatcher::multiply(7*7) result=49 [callCount=1]
[1]   ActiveMultiplierDispatcher::multiply(4*6) invoked from thread[0] [callCount=2]
[1]  ActiveMultiplierDispatcher::multiplyImpl end
[0]   ActiveMultiplierDispatcher::multiply(4*6) result=24 [callCount=2]
[0]  ActiveMultiplierDispatcher end
[0] ActiveDispatcherTest end
