//
//  Timer ReadMe.txt
//
//  Created by Setsu on 5/26/2010.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is Timer?
//----------------------------------------
Sample code which uses Poco::Timer.
   http://pocoproject.org/docs/Poco.Timer.html

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
Open TimerTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for TimerTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
[0] TimerTest start
[0]   while loop in main()   [counter=0]
[1]   TimerCallback  249msec [counter=0]
[1]   TimerCallback  749msec [counter=1]
[0]   while loop in main()   [counter=2]
[1]   TimerCallback 1249msec [counter=2]
[1]   TimerCallback 1750msec [counter=3]
[0]   while loop in main()   [counter=4]
[1]   TimerCallback 2250msec [counter=4]
[1]   TimerCallback 2750msec [counter=5]
[0]   while loop in main()   [counter=6]
[1]   TimerCallback 3249msec [counter=6]
[1]   TimerCallback 3749msec [counter=7]
[0]   while loop in main()   [counter=8]
[1]   TimerCallback 4249msec [counter=8]
[1]   TimerCallback 4750msec [counter=9]
[0] TimerTest end
