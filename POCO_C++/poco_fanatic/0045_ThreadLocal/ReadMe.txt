//
//  ThreadLocal ReadMe.txt
//
//  Created by Setsu on 7/15/2010.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is ThreadLocal?
//----------------------------------------
Sample code which uses Poco::ThreadLocal.
   http://pocoproject.org/docs/Poco.ThreadLocal.html

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
Open ThreadLocalTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for ThreadLocalTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
[0] ThreadLocalTest start
[0]  TestThreadLocal #1
      history():
       groups
       uptime
[0]  TestThreadLocal #2
      history():
       date
       groups
       users
       uname -a
       svn update
[0]  TestThreadLocal #3
      history():
       svn update
       date
       pwd
[0] ThreadLocalTest end
