//
//  NotificationQueue ReadMe.txt
//
//  Created by Setsu on 6/6/2010.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is NotificationQueue?
//----------------------------------------
Sample code which uses Poco::NotificationQueue.
   http://pocoproject.org/docs/Poco.NotificationQueue.html

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
Open NotificationQueueTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for NotificationQueueTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
[0] NotificationQueueTest start
[0] --- Poco::NotificationQueue ---
[0]   Worker 1 created
[0]   Worker 2 created
[0]   Worker 3 created
[2]     Worker 2 got work notification 0
[1]     Worker 1 got work notification 1
[3]     Worker 3 got work notification 2
[2]     Worker 2 got work notification 3
[1]     Worker 1 got work notification 4
[3]     Worker 3 got work notification 5
[2]     Worker 2 got work notification 6
[1]     Worker 1 got work notification 7
[3]     Worker 3 got work notification 8
[2]     Worker 2 got work notification 9
[1]     Worker 1 got work notification 10
[3]     Worker 3 got work notification 11
[0]   Worker 3 deleted
[0]   Worker 2 deleted
[0]   Worker 1 deleted
[0] --- Poco::PriorityNotificationQueue ---
[0]   Worker 1 created
[0]   Worker 2 created
[0]   Worker 3 created
[3]     Worker 3 got work notification 11
[1]     Worker 1 got work notification 10
[2]     Worker 2 got work notification 9
[3]     Worker 3 got work notification 8
[1]     Worker 1 got work notification 7
[2]     Worker 2 got work notification 6
[3]     Worker 3 got work notification 5
[1]     Worker 1 got work notification 4
[2]     Worker 2 got work notification 3
[3]     Worker 3 got work notification 2
[1]     Worker 1 got work notification 1
[2]     Worker 2 got work notification 0
[0]   Worker 3 deleted
[0]   Worker 2 deleted
[0]   Worker 1 deleted
[0] NotificationQueueTest end
