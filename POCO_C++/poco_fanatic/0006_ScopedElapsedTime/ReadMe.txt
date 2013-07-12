//
//  ScopedElapsedTime ReadMe.txt
//
//  Created by Setsu on 4/28/10.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is ScopedElapsedTime?
//----------------------------------------
Elapsed time measuring class which uses Poco::Stopwatch.
   http://pocoproject.org/docs/Poco.Stopwatch.html

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
Open ScopedElapsedTime.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for ScopedElapsedTimeTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
[0] ScopedElapsedTime start [maximum precision check]
[0]  Elepsed time = 0.002mSec
[0] ScopedElapsedTime end
[0] ScopedElapsedTime start [Poco::Thread::sleep(300) check]
[0]  Elepsed time = 300.063mSec
[0] ScopedElapsedTime end
