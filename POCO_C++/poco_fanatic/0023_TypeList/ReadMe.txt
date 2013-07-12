//
//  TypeList ReadMe.txt
//
//  Created by Setsu on 5/30/2010.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is TypeList?
//----------------------------------------
Sample code which uses Poco::TypeList.
   http://pocoproject.org/docs/Poco.TypeList.html

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
Open TypeListTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for TypeListTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
[0] TypeListTest start
[0]   source text:
---  This is a sample text file for HTTPClientSessionTest  ---
[0]     MD4: 61f79367426e3b0f53428c22cf13dd0a [OK]
[0]     MD5: 1d5acafd189d20e30daca7381e1846a0 [OK]
[0]    SHA1: 085ba5956bb1420f47229ae410a7760f01320ea5 [OK]
[0]    HMAC: e72891e5af825ba8bdd7fe3ced51dac9 [OK]
[0] TypeListTest end
