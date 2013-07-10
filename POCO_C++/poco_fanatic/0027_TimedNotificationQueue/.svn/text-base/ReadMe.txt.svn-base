//
//  TimedNotificationQueue ReadMe.txt
//
//  Created by Setsu on 6/8/2010.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is TimedNotificationQueue?
//----------------------------------------
Sample code which uses Poco::TimedNotificationQueue.
   http://pocoproject.org/docs/Poco.TimedNotificationQueue.html

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
Open TimedNotificationQueueTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for TimedNotificationQueueTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
[0] TimedNotificationQueueTest start
[0]   Child 1 created
[0]   Child 2 created
[0]   Child 3 created
[1]    enqueueNotification #1 from Child 1 (05:17:15.460)
[2]    enqueueNotification #2 from Child 2 (05:17:15.528)
[3]    enqueueNotification #3 from Child 3 (05:17:15.449)
[1]    enqueueNotification #4 from Child 1 (05:17:15.573)
[2]    enqueueNotification #5 from Child 2 (05:17:15.374)
[3]    enqueueNotification #6 from Child 3 (05:17:15.162)
[1]    enqueueNotification #7 from Child 1 (05:17:15.277)
[2]    enqueueNotification #8 from Child 2 (05:17:15.212)
[3]    enqueueNotification #9 from Child 3 (05:17:15.555)
[0]     got child notification #6 from Child 3 (05:17:15.162)
[0]     got child notification #8 from Child 2 (05:17:15.212)
[0]     got child notification #7 from Child 1 (05:17:15.277)
[0]     got child notification #5 from Child 2 (05:17:15.374)
[0]     got child notification #3 from Child 3 (05:17:15.449)
[0]     got child notification #1 from Child 1 (05:17:15.460)
[0]     got child notification #2 from Child 2 (05:17:15.528)
[0]     got child notification #9 from Child 3 (05:17:15.555)
[0]     got child notification #4 from Child 1 (05:17:15.573)
[0]   Child 3 deleted
[0]   Child 2 deleted
[0]   Child 1 deleted
[0] TimedNotificationQueueTest end
