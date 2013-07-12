//
//  Tuple ReadMe.txt
//
//  Created by Setsu on 7/30/2010.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is Tuple?
//----------------------------------------
Sample code which uses Poco::Tuple.
   http://pocoproject.org/docs/Poco.Tuple.html

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
Open TupleTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for TupleTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
[0] TupleTest start
[0]  --- Test get/set ---
[0]   aTuple: (+1, +2, +3.00), length=3
[0]   aTuple: (-1, -2, -3.00), length=3
[0]  --- Test operator less than ---
[0]   testSet #0: ("1", 1, 111, 1.11), length=4
[0]   testSet #1: ("2", 2, 222, 2.22), length=4
[0]   testSet #2: ("3", 3, 333, 3.33), length=4
[0]  --- Test NamedTuple ---
[0]   names for aTuple elements:
[0]    0: A
[0]    1: B
[0]    2: C
[0]    3: D
[0]   get elements by name:
[0]    aTuple: ("1", 1, 111, 1.11), length=4
[0] TupleTest end
