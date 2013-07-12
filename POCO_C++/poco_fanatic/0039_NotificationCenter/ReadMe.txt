//
//  NotificationCenter ReadMe.txt
//
//  Created by Setsu on 7/4/2010.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is NotificationCenter?
//----------------------------------------
Sample code which uses Poco::NotificationCenter.
   http://pocoproject.org/docs/Poco.NotificationCenter.html

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
Open NotificationCenterTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for NotificationCenterTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
[0] NotificationCenterTest start
[0] --- T = Poco::NotificationQueue ---
[0]   Worker<T,1> created
[0]   Worker<T,2> created
[0]   Worker<T,3> created
[0]     Worker<T,1> handleNotification got BaseNotification(3)
[0]     Worker<T,2> handleNotification got BaseNotification(3)
[0]     Worker<T,3> handleNotification got EachNotification<3>(3)
[0]      -> enqueue EachNotification<3>(3)
[0]     Worker<T,1> handleNotification got BaseNotification(2)
[0]     Worker<T,2> handleNotification got EachNotification<2>(2)
[0]      -> enqueue EachNotification<2>(2)
[0]     Worker<T,3> handleNotification got BaseNotification(2)
[0]     Worker<T,1> handleNotification got EachNotification<1>(1)
[0]      -> enqueue EachNotification<1>(1)
[0]     Worker<T,2> handleNotification got BaseNotification(1)
[0]     Worker<T,3> handleNotification got BaseNotification(1)
[0]     Worker<T,1> handleNotification got BaseNotification(0)
[0]      -> enqueue EachNotification<1>(0)
[0]     Worker<T,2> handleNotification got BaseNotification(0)
[0]      -> enqueue EachNotification<2>(0)
[0]     Worker<T,3> handleNotification got BaseNotification(0)
[0]      -> enqueue EachNotification<3>(0)
[2]     Worker<T,2> got EachNotification<2>(2)
[1]     Worker<T,1> got EachNotification<1>(1)
[3]     Worker<T,3> got EachNotification<3>(3)
[1]     Worker<T,1> got EachNotification<1>(0)
[2]     Worker<T,2> got EachNotification<2>(0)
[3]     Worker<T,3> got EachNotification<3>(0)
[1]     Worker<T,1> exits run loop
[2]     Worker<T,2> exits run loop
[3]     Worker<T,3> exits run loop
[0]   Worker<T,3> deleted
[0]   Worker<T,2> deleted
[0]   Worker<T,1> deleted
[0] --- T = Poco::PriorityNotificationQueue ---
[0]   Worker<T,1> created
[0]   Worker<T,2> created
[0]   Worker<T,3> created
[0]     Worker<T,1> handleNotification got BaseNotification(3)
[0]     Worker<T,2> handleNotification got BaseNotification(3)
[0]     Worker<T,3> handleNotification got EachNotification<3>(3)
[0]      -> enqueue EachNotification<3>(3)
[0]     Worker<T,1> handleNotification got BaseNotification(2)
[0]     Worker<T,2> handleNotification got EachNotification<2>(2)
[0]      -> enqueue EachNotification<2>(2)
[0]     Worker<T,3> handleNotification got BaseNotification(2)
[0]     Worker<T,1> handleNotification got EachNotification<1>(1)
[0]      -> enqueue EachNotification<1>(1)
[0]     Worker<T,2> handleNotification got BaseNotification(1)
[0]     Worker<T,3> handleNotification got BaseNotification(1)
[0]     Worker<T,1> handleNotification got BaseNotification(0)
[0]      -> enqueue EachNotification<1>(0)
[0]     Worker<T,2> handleNotification got BaseNotification(0)
[0]      -> enqueue EachNotification<2>(0)
[0]     Worker<T,3> handleNotification got BaseNotification(0)
[0]      -> enqueue EachNotification<3>(0)
[1]     Worker<T,1> got EachNotification<1>(0)
[1]     Worker<T,1> exits run loop
[3]     Worker<T,3> got EachNotification<3>(0)
[3]     Worker<T,3> exits run loop
[2]     Worker<T,2> got EachNotification<2>(0)
[2]     Worker<T,2> exits run loop
[0]   Worker<T,3> deleted
[0]   Worker<T,2> deleted
[0]   Worker<T,1> deleted
[0] NotificationCenterTest end
