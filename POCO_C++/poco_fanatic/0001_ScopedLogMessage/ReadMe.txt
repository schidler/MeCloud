//
//  ScopedLogMessage ReadMe.txt
//
//  Created by Setsu on 4/18/10.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is ScopedLogMessage?
//----------------------------------------
Message logging class which uses Poco::Logger.
   http://pocoproject.org/docs/Poco.Logger.html

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
Open ScopedLogMessage.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for ScopedLogMessageTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
[0] ScopedLogMessage start
[0]   doing something...
[0] ScopedLogMessage end
