//
//  BinaryWriterReader ReadMe.txt
//
//  Created by Setsu on 6/11/2010.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is BinaryWriterReader?
//----------------------------------------
Sample code which uses Poco::BinaryWriter and Poco::BinaryReader.
   http://pocoproject.org/docs/Poco.BinaryWriter.html
   http://pocoproject.org/docs/Poco.BinaryReader.html

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
Open BinaryWriterReaderTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for BinaryWriterReaderTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
[0] BinaryWriterReaderTest start
[0]  Write myClass #1 to temporary file #1
[0]   Dump myClass #1
m_count  = 1
m_bool   = 0
m_char   = ~
m_uChar  = 170
m_short  = -30705
m_uShort = 49359
m_int32  = 1906068137
m_uInt32 = 888506539
m_int64  = 244128200806792124
m_uInt64 = 2337134079393737996
m_double = 378104.085000
m_float  = 138411.687500
m_str    = MyClass #1
[0]  Write myClass #2 to temporary file #2
[0]   Dump myClass #2
m_count  = 2
m_bool   = 0
m_char   = S
m_uChar  = 221
m_short  = 14216
m_uShort = 1796
m_int32  = 676931970
m_uInt32 = 2066742022
m_int64  = 1735886134647623719
m_uInt64 = 267123056341812168
m_double = 1652121.041000
m_float  = 304974.562500
m_str    = MyClass #2
[0]  Read  myClass #1 from temporary file #1 [OK]
[0]   Dump myClass #1
m_count  = 1
m_bool   = 0
m_char   = ~
m_uChar  = 170
m_short  = -30705
m_uShort = 49359
m_int32  = 1906068137
m_uInt32 = 888506539
m_int64  = 244128200806792124
m_uInt64 = 2337134079393737996
m_double = 378104.085000
m_float  = 138411.687500
m_str    = MyClass #1
[0]  Read  myClass #2 from temporary file #2 [OK]
[0]   Dump myClass #2
m_count  = 2
m_bool   = 0
m_char   = S
m_uChar  = 221
m_short  = 14216
m_uShort = 1796
m_int32  = 676931970
m_uInt32 = 2066742022
m_int64  = 1735886134647623719
m_uInt64 = 267123056341812168
m_double = 1652121.041000
m_float  = 304974.562500
m_str    = MyClass #2
[0] BinaryWriterReaderTest end
