//
//  ByteOrder ReadMe.txt
//
//  Created by Setsu on 7/10/2010.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is ByteOrder?
//----------------------------------------
Sample code which uses Poco::ByteOrder.
   http://pocoproject.org/docs/Poco.ByteOrder.html

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
Open ByteOrderTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for ByteOrderTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
// On little-endian computer
[0] ByteOrderTest start
[0]  This is a little-endian computer system.
[0]  flipBytes, flipBytes:
[0]    Int16  0x0012 -> 0x1200 -> 0x0012
[0]    UInt16 0x0012 -> 0x1200 -> 0x0012
[0]    Int32  0x00000012 -> 0x12000000 -> 0x00000012
[0]    UInt32 0x00000012 -> 0x12000000 -> 0x00000012
[0]    Int64  0x0000000000000012 -> 0x1200000000000000 -> 0x0000000000000012
[0]    UInt64 0x0000000000000012 -> 0x1200000000000000 -> 0x0000000000000012
[0]  toBigEndian, fromBigEndian:
[0]    Int16  0x0012 -> 0x1200 -> 0x0012
[0]    UInt16 0x0012 -> 0x1200 -> 0x0012
[0]    Int32  0x00000012 -> 0x12000000 -> 0x00000012
[0]    UInt32 0x00000012 -> 0x12000000 -> 0x00000012
[0]    Int64  0x0000000000000012 -> 0x1200000000000000 -> 0x0000000000000012
[0]    UInt64 0x0000000000000012 -> 0x1200000000000000 -> 0x0000000000000012
[0]  toLittleEndian, fromLittleEndian:
[0]    Int16  0x0012 -> 0x0012 -> 0x0012
[0]    UInt16 0x0012 -> 0x0012 -> 0x0012
[0]    Int32  0x00000012 -> 0x00000012 -> 0x00000012
[0]    UInt32 0x00000012 -> 0x00000012 -> 0x00000012
[0]    Int64  0x0000000000000012 -> 0x0000000000000012 -> 0x0000000000000012
[0]    UInt64 0x0000000000000012 -> 0x0000000000000012 -> 0x0000000000000012
[0]  toNetwork, fromNetwork:
[0]    Int16  0x0012 -> 0x1200 -> 0x0012
[0]    UInt16 0x0012 -> 0x1200 -> 0x0012
[0]    Int32  0x00000012 -> 0x12000000 -> 0x00000012
[0]    UInt32 0x00000012 -> 0x12000000 -> 0x00000012
[0]    Int64  0x0000000000000012 -> 0x1200000000000000 -> 0x0000000000000012
[0]    UInt64 0x0000000000000012 -> 0x1200000000000000 -> 0x0000000000000012
[0] ByteOrderTest end

// On big-endian computer
[0] ByteOrderTest start
[0]  This is a big-endian computer system.
[0]  flipBytes, flipBytes:
[0]    Int16  0x0012 -> 0x1200 -> 0x0012
[0]    UInt16 0x0012 -> 0x1200 -> 0x0012
[0]    Int32  0x00000012 -> 0x12000000 -> 0x00000012
[0]    UInt32 0x00000012 -> 0x12000000 -> 0x00000012
[0]    Int64  0x0000000000000012 -> 0x1200000000000000 -> 0x0000000000000012
[0]    UInt64 0x0000000000000012 -> 0x1200000000000000 -> 0x0000000000000012
[0]  toBigEndian, fromBigEndian:
[0]    Int16  0x0012 -> 0x0012 -> 0x0012
[0]    UInt16 0x0012 -> 0x0012 -> 0x0012
[0]    Int32  0x00000012 -> 0x00000012 -> 0x00000012
[0]    UInt32 0x00000012 -> 0x00000012 -> 0x00000012
[0]    Int64  0x0000000000000012 -> 0x0000000000000012 -> 0x0000000000000012
[0]    UInt64 0x0000000000000012 -> 0x0000000000000012 -> 0x0000000000000012
[0]  toLittleEndian, fromLittleEndian:
[0]    Int16  0x0012 -> 0x1200 -> 0x0012
[0]    UInt16 0x0012 -> 0x1200 -> 0x0012
[0]    Int32  0x00000012 -> 0x12000000 -> 0x00000012
[0]    UInt32 0x00000012 -> 0x12000000 -> 0x00000012
[0]    Int64  0x0000000000000012 -> 0x1200000000000000 -> 0x0000000000000012
[0]    UInt64 0x0000000000000012 -> 0x1200000000000000 -> 0x0000000000000012
[0]  toNetwork, fromNetwork:
[0]    Int16  0x0012 -> 0x0012 -> 0x0012
[0]    UInt16 0x0012 -> 0x0012 -> 0x0012
[0]    Int32  0x00000012 -> 0x00000012 -> 0x00000012
[0]    UInt32 0x00000012 -> 0x00000012 -> 0x00000012
[0]    Int64  0x0000000000000012 -> 0x0000000000000012 -> 0x0000000000000012
[0]    UInt64 0x0000000000000012 -> 0x0000000000000012 -> 0x0000000000000012
[0] ByteOrderTest end
