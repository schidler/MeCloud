//
//  SingletonHolder ReadMe.txt
//
//  Created by Setsu on 7/19/2010.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is SingletonHolder?
//----------------------------------------
Sample code which uses Poco::SingletonHolder.
   http://pocoproject.org/docs/Poco.SingletonHolder.html

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
Open SingletonHolderTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for SingletonHolderTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
[0] SingletonHolderTest start
[0]  --- SingletonTarget ---
[0]   SingletonTarget created.
[0]   SingletonTarget::doSomething called.
[0]   SingletonTarget::doSomething called.
[0]   SingletonTarget deleted.
[0]  --- ClassWithDefaultInstance ---
[0]   ClassWithDefaultInstance created.
[0]   ClassWithDefaultInstance::doSomething called.
[0]   ClassWithDefaultInstance::doSomething called.
[0] SingletonHolderTest end
[0]   ClassWithDefaultInstance deleted.
