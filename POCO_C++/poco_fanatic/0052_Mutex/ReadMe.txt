//
//  Mutex ReadMe.txt
//
//  Created by Setsu on 7/25/2010.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is Mutex?
//----------------------------------------
Sample code which uses Poco::Mutex.
   http://pocoproject.org/docs/Poco.Mutex.html

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
Open MutexTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for MutexTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
// On Linux
[0] MutexTest start
[0]  --- Poco::Mutex test ---
[0]   counter = 5000 (expected: 5000)
[0]   Elapsed time = 2387.954mSec
[0]  --- Poco::FastMutex test ---
[0]   counter = 5000 (expected: 5000)
[0]   Elapsed time = 2142.277mSec
[0] MutexTest end

// On Macintosh OSX 10.6.4
[0] MutexTest start
[0]  --- Poco::Mutex test ---
[0]   counter = 5000 (expected: 5000)
[0]   Elapsed time = 990.828mSec
[0]  --- Poco::FastMutex test ---
[0]   counter = 5000 (expected: 5000)
[0]   Elapsed time = 989.493mSec
[0] MutexTest end

// On Windows XP sp3
[0] MutexTest start
[0]  --- Poco::Mutex test ---
[0]   counter = 5000 (expected: 5000)
[0]   Elapsed time = 2765.625mSec
[0]  --- Poco::FastMutex test ---
[0]   counter = 5000 (expected: 5000)
[0]   Elapsed time = 1359.375mSec
[0] MutexTest end
