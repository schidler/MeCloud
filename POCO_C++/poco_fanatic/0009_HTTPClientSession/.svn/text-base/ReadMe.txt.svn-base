//
//  HTTPClientSession ReadMe.txt
//
//  Created by Setsu on 5/4/10.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is HTTPClientSession?
//----------------------------------------
Sample code which uses Poco::HTTPClientSession.
   http://pocoproject.org/docs/Poco.Net.HTTPClientSession.html

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
Open HTTPClientSessionTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for HTTPClientSessionTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
[0] HTTPGetter start
---  This is a sample text file for HTTPClientSessionTest  ---
[0]  Elepsed time = 87.686mSec
[0] HTTPGetter end
