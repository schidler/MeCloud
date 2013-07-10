//
//  LogRotation ReadMe.txt
//
//  Created by Setsu on 5/24/2010.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is LogRotation?
//----------------------------------------
Sample code which uses Poco::LogRotation.
   http://pocoproject.org/docs/Poco.LogRotation.html

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
Open LogRotationTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for LogRotationTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
Tue May 25 21:00:00.660 2010: [0] LogRotationTest start
Tue May 25 21:00:00.669 2010: [0]   LogRotationTest 0
Tue May 25 21:00:00.769 2010: [0]   LogRotationTest 1
Tue May 25 21:00:00.869 2010: [0]   LogRotationTest 2
Tue May 25 21:00:00.970 2010: [0]   LogRotationTest 3
Tue May 25 21:00:01.071 2010: [0]   LogRotationTest 4
Tue May 25 21:00:01.171 2010: [0]   LogRotationTest 5
Tue May 25 21:00:01.272 2010: [0]   LogRotationTest 6
Tue May 25 21:00:01.372 2010: [0]   LogRotationTest 7
Tue May 25 21:00:01.472 2010: [0]   LogRotationTest 8
Tue May 25 21:00:01.573 2010: [0]   LogRotationTest 9
Tue May 25 21:00:01.673 2010: [0] LogRotationTest end

rotated.log
Tue May 25 21:00:01.472 2010: [0]   LogRotationTest 8
Tue May 25 21:00:01.573 2010: [0]   LogRotationTest 9
Tue May 25 21:00:01.673 2010: [0] LogRotationTest end

rotated.log.20100525210000870
Tue May 25 21:00:00.660 2010: [0] LogRotationTest start
Tue May 25 21:00:00.669 2010: [0]   LogRotationTest 0
Tue May 25 21:00:00.769 2010: [0]   LogRotationTest 1

rotated.log.20100525210001171
Tue May 25 21:00:00.869 2010: [0]   LogRotationTest 2
Tue May 25 21:00:00.970 2010: [0]   LogRotationTest 3
Tue May 25 21:00:01.071 2010: [0]   LogRotationTest 4

rotated.log.20100525210001473
Tue May 25 21:00:01.171 2010: [0]   LogRotationTest 5
Tue May 25 21:00:01.272 2010: [0]   LogRotationTest 6
Tue May 25 21:00:01.372 2010: [0]   LogRotationTest 7
