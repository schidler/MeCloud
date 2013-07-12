//
//  ActiveMethodTest ReadMe.txt
//
//  Created by Setsu on 4/21/10.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is ActiveMethodTest?
//----------------------------------------
Sample code which uses Poco::ActiveMethod.
   http://pocoproject.org/docs/Poco.ActiveMethod.html

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
Open ActiveMethodTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for ActiveMethodTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
[0] ActiveMethodTest start
[0]  ActiveMultiplier start
[0]  ActiveMultiplier start
[1]  ActiveMultiplier::multiplyImpl start
[0]   doing something...
[2]  ActiveMultiplier::multiplyImpl start
[1]   ActiveMultiplier::multiply(9*4) invoked from thread[0] [callCount=1]
[1]  ActiveMultiplier::multiplyImpl end
[0]   ActiveMultiplier::multiply(9*4) result=36 [callCount=1]
[2]   ActiveMultiplier::multiply(6*3) invoked from thread[0] [callCount=1]
[0]  ActiveMultiplier end
[2]  ActiveMultiplier::multiplyImpl end
[0]   ActiveMultiplier::multiply(6*3) result=18 [callCount=1]
[0]  ActiveMultiplier end
[0] ActiveMethodTest end
