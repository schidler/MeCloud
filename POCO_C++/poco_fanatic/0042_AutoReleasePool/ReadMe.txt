//
//  AutoReleasePool ReadMe.txt
//
//  Created by Setsu on 7/10/2010.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is AutoReleasePool?
//----------------------------------------
Sample code which uses Poco::AutoReleasePool.
   http://pocoproject.org/docs/Poco.AutoReleasePool.html

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
Open AutoReleasePoolTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for AutoReleasePoolTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
[0] AutoReleasePoolTest start
[0]  MyObjectOwner created
[0]   MyObject0 created
[0]   MyObject1 created
[0]   MyObject2 created
[0]    name() = MyObject0
[0]    name() = MyObject1
[0]    name() = MyObject2
[0]   MyObject0 deleted
[0]   MyObject1 deleted
[0]   MyObject2 deleted
[0]  MyObjectOwner deleted
[0] AutoReleasePoolTest end
