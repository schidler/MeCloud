//
//  RegularExpression ReadMe.txt
//
//  Created by Setsu on 6/13/2010.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is RegularExpression?
//----------------------------------------
Sample code which uses Poco::RegularExpression.
   http://pocoproject.org/docs/Poco.RegularExpression.html

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
Open RegularExpressionTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for RegularExpressionTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
[0] RegularExpressionTest start
[0]  Finding out methods/enumerations from "http://pocoproject.org/docs/Poco.RegularExpression.html".
[0]   found "MatchVec"
[0]   found "Options"
[0]   found "RegularExpression"
[0]   found "extract"
[0]   found "extract"
[0]   found "match"
[0]   found "match"
[0]   found "match"
[0]   found "match"
[0]   found "match"
[0]   found "match"
[0]   found "split"
[0]   found "split"
[0]   found "subst"
[0]   found "subst"
[0]   found "substOne"
[0]  HTML file "RegularExpression.html" created.
[0] RegularExpressionTest end
