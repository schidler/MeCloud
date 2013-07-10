//
//  SynchronizedObject ReadMe.txt
//
//  Created by Setsu on 6/29/10.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is SynchronizedObject?
//----------------------------------------
Message logging class which uses Poco::SynchronizedObject.
   http://pocoproject.org/docs/Poco.SynchronizedObject.html

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
Open SynchronizedObjectTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for SynchronizedObjectTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
[0] SynchronizedObjectTest start
[1] 000000  ThreadA Job1 start
[2] 000000  ThreadB Job1 start
[3] 000000  ThreadC Job1 start
[2] 000050  ThreadB Job1 end
[2] 000050  ThreadB sleeps
[3] 000100  ThreadC Job1 end
[3] 000100  ThreadC sleeps
[1] 000200  ThreadA Job1 end
[1] 000200    ThreadA sleeps
[3] 000200    ThreadC woke up by SyncObjectAC
[3] 000200    ThreadC Job2 start
[2] 000200    ThreadB woke up by SyncObjectAB
[2] 000200    ThreadB Job2 start
[3] 000250    ThreadC Job2 end
[3] 000250    ThreadC sleeps
[2] 000401    ThreadB Job2 end
[2] 000401      ThreadB sleeps
[3] 000401      ThreadC woke up by SyncObjectBC
[3] 000401      ThreadC Job3 start
[1] 000401      ThreadA woke up by SyncObjectBA
[1] 000401      ThreadA Job2 start
[1] 000501      ThreadA Job2 end
[1] 000501      ThreadA sleeps
[3] 000601      ThreadC Job3 end
[3] 000601        ThreadC Job4 start
[2] 000601        ThreadB woke up by SyncObjectCB
[2] 000601        ThreadB Job3 start
[1] 000601        ThreadA woke up by SyncObjectCA
[1] 000602        ThreadA Job3 start
[1] 000652        ThreadA Job3 end
[1] 000652        ThreadA Job4 start
[2] 000701        ThreadB Job3 end
[2] 000702        ThreadB Job4 start
[1] 001052        ThreadA Job4 end
[2] 001102        ThreadB Job4 end
[3] 001151        ThreadC Job4 end
[0] SynchronizedObjectTest end
