//
//  RWLock ReadMe.txt
//
//  Created by Setsu on 7/25/2010.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is RWLock?
//----------------------------------------
Sample code which uses Poco::RWLock.
   http://pocoproject.org/docs/Poco.RWLock.html

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
Open RWLockTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for RWLockTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
[0] RWLockTest start
[0]  counter = 5000 (expected: 5000)
[0]  Elapsed time = 1431.262mSec
[0] RWLockTest end
