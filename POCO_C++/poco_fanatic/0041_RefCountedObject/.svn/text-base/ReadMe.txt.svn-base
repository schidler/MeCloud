//
//  RefCountedObject ReadMe.txt
//
//  Created by Setsu on 7/8/2010.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is RefCountedObject?
//----------------------------------------
Sample code which uses Poco::RefCountedObject.
   http://pocoproject.org/docs/Poco.RefCountedObject.html

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
Open RefCountedObjectTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for RefCountedObjectTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
[0] RefCountedObjectTest start
[0]  MyObject1 created
[0]    ptr1->referenceCount() = 1
[0]   ptr2 = ptr1
[0]    ptr1->referenceCount() = 2
[0]  MyObject2 created
[0]   ptr2 = new MyObject(msg, "2")
[0]    ptr1->referenceCount() = 1
[0]    ptr2->referenceCount() = 1
[0]   ptr3 = ptr2
[0]    ptr1->referenceCount() = 1
[0]    ptr2->referenceCount() = 2
[0]    ptr3->referenceCount() = 2
[0]  MyObject3 created
[0]   ptr3 = new MyObject(msg, "3")
[0]    ptr1->referenceCount() = 1
[0]    ptr2->referenceCount() = 1
[0]    ptr3->referenceCount() = 1
[0]  MyObject3 deleted
[0]  MyObject2 deleted
[0]  MyObject1 deleted
[0] RefCountedObjectTest end
