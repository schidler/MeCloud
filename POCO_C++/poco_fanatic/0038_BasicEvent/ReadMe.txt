//
//  BasicEvent ReadMe.txt
//
//  Created by Setsu on 7/2/10.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is BasicEvent?
//----------------------------------------
Message logging class which uses Poco::BasicEvent.
   http://pocoproject.org/docs/Poco.BasicEvent.html

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
Open BasicEventTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for BasicEventTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
[0] BasicEventTest start
[0] --- Basic Event ---
[0]  Target[0]::onEvent (got data=12 from source -> 13)
[0]  Target[1]::onEvent (got data=13 from source -> 14)
[0]  Target[2]::onEvent (got data=14 from source -> 15)
[0] --- Expireing Target ---
[0]  Target[0]::onEvent (got data=34 from source -> 35)
[0] --- Async Notify ---
[1]  Target[0]::onEvent (got data=78 from source -> 79)
[0] BasicEventTest end
