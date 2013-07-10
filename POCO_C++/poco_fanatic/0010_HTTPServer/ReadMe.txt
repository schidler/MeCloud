//
//  HTTPServer ReadMe.txt
//
//  Created by Setsu on 5/5/10.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is HTTPServer?
//----------------------------------------
Sample code which uses Poco::HTTPServer.
   http://pocoproject.org/docs/Poco.Net.HTTPServer.html

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
Open HTTPServerTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for HTTPServerTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
[0]  main() start
[0]  ActiveDiagnosticsDispatcher start

[2]  FormRequestHandler start
[2]   Request from 192.168.1.7:49259
[2]  FormRequestHandler end

[3]  FormRequestHandler start
[3]   Request from 127.0.0.1:49411
[3]  FormRequestHandler end

[2]  FormRequestHandler start
[2]   Request from 192.168.1.7:49259
[1]  ActiveDiagnosticsDispatcher::testImpl start
[1]   test #0 result: 0
[1]  Elepsed time = 50.176mSec
[1]  ActiveDiagnosticsDispatcher::testImpl end
[1]  ActiveDiagnosticsDispatcher::testImpl start
[3]  FormRequestHandler start
[3]   Request from 127.0.0.1:49411
[1]   test #1 result: -1
[1]  Elepsed time = 50.114mSec
[1]  ActiveDiagnosticsDispatcher::testImpl end
[1]  ActiveDiagnosticsDispatcher::testImpl start
[1]   test #2 result: 0
[1]  Elepsed time = 50.182mSec
[1]  ActiveDiagnosticsDispatcher::testImpl end
[1]  ActiveDiagnosticsDispatcher::testImpl start
[2]  FormRequestHandler end

[1]   test #0 result: 0
[1]  Elepsed time = 50.172mSec
[1]  ActiveDiagnosticsDispatcher::testImpl end
[1]  ActiveDiagnosticsDispatcher::testImpl start
[1]   test #1 result: -1
[1]  Elepsed time = 50.153mSec
[1]  ActiveDiagnosticsDispatcher::testImpl end
[1]  ActiveDiagnosticsDispatcher::testImpl start
[1]   test #2 result: 0
[1]  Elepsed time = 50.570mSec
[1]  ActiveDiagnosticsDispatcher::testImpl end
[3]  FormRequestHandler end

[2]  FormRequestHandler start
[2]   Request from 192.168.1.7:49259
[2]  FormRequestHandler end

^C
[0]  ActiveDiagnosticsDispatcher end
[0]  main() end
