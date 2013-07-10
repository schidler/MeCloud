//
//  ThreadTarget ReadMe.txt
//
//  Created by Setsu on 7/16/2010.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is ThreadTarget?
//----------------------------------------
Sample code which uses Poco::ThreadTarget.
   http://pocoproject.org/docs/Poco.ThreadTarget.html

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
Open ThreadTargetTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for ThreadTargetTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
[0] ThreadTargetTest start
[1]   StaticMethod() start
[2]   TestFunction() start
[3]   MemberMethod() start
[3]   MemberMethod() end
[2]   TestFunction() end
[1]   StaticMethod() end
[0] ThreadTargetTest end
