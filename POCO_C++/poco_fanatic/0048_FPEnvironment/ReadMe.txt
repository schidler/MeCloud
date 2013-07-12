//
//  FPEnvironment ReadMe.txt
//
//  Created by Setsu on 7/19/2010.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is FPEnvironment?
//----------------------------------------
Sample code which uses Poco::FPEnvironment.
   http://pocoproject.org/docs/Poco.FPEnvironment.html

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
Open FPEnvironmentTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for FPEnvironmentTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
[0] FPEnvironmentTest start
[0]  --- float ---
[0]   isNaN(0.0/0.0): true
[0]   isNaN(0.0): false
[0]   isInfinite(1.0/0.0): true
[0]   isInfinite(0.0): false
[0]  --- double ---
[0]   isNaN(0.0/0.0): true
[0]   isNaN(0.0): false
[0]   isInfinite(1.0/0.0): true
[0]   isInfinite(0.0): false
[0]  --- div(10, 0) ---
[0]   isFlag(Poco::FPE::FP_DIVIDE_BY_ZERO): true
[0]   isInfinite: true
[0]  --- mult(1.23456789e+210, 9.87654321e+210) ---
[0]   isFlag(Poco::FPE::FP_OVERFLOW): true
[0]   isInfinite: true
[0]  --- div(1.23456789e-99, 9.87654321e+210) ---
[0]   isFlag(Poco::FPE::FP_UNDERFLOW): true
[0]   isInfinite: false
[0]  --- RoundingMode ---
[0]   getRoundingMode() == Poco::FPE::FP_ROUND_TONEAREST: true
[0]   getRoundingMode() == Poco::FPE::FP_ROUND_TOWARDZERO: true
[0]   getRoundingMode() == Poco::FPE::FP_ROUND_TONEAREST: true
[0] FPEnvironmentTest end
