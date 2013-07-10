//
//  Checksum ReadMe.txt
//
//  Created by Setsu on 7/11/2010.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is Checksum?
//----------------------------------------
Sample code which uses Poco::Checksum.
   http://pocoproject.org/docs/Poco.Checksum.html

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
Open ChecksumTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for ChecksumTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
// On Linux debian 2.6.26-2-686
[0] ChecksumTest start
[0]  Number of buffer allocation bytes: 67108864
[0]          TYPE_ADLER32                 TYPE_CRC32
[0]       checksum     time           checksum     time
[0]  =============================+=======================
[0]  #1: 0xCD6D8E59  167.299mSec     0x4D50B53A   91.137mSec
[0]  #2: 0xF7775AC2  166.580mSec     0xE4AC4D84   91.140mSec
[0]  #3: 0x5C97CDDD  164.049mSec     0x0990709C   91.713mSec
[0]  #4: 0x3880ADFB  164.859mSec     0xFB78DA54   92.857mSec
[0] ChecksumTest end

// On Linux Ubuntu 2.6.32-23-generic
[0] ChecksumTest start
[0]  Number of buffer allocation bytes: 67108864
[0]          TYPE_ADLER32                 TYPE_CRC32
[0]       checksum     time           checksum     time
[0]  =============================+=======================
[0]  #1: 0xECEE89B4   57.698mSec     0x7DAB7CE2  104.128mSec
[0]  #2: 0x4C30E1D2   56.870mSec     0xD717AEEA  100.885mSec
[0]  #3: 0x2EBA68B1   60.547mSec     0x38BDDB51  102.593mSec
[0]  #4: 0x8E4E0709   57.288mSec     0xE22F107F  100.440mSec
[0] ChecksumTest end

// On Macintosh OSX 10.6.3
[0] ChecksumTest start
[0]  Number of buffer allocation bytes: 67108864
[0]          TYPE_ADLER32                 TYPE_CRC32
[0]       checksum     time           checksum     time
[0]  =============================+=======================
[0]  #1: 0x1775DEEF   66.666mSec     0xE27BDE31   98.712mSec
[0]  #2: 0xE94BD1A1   66.495mSec     0x67207840   98.127mSec
[0]  #3: 0x55F24F36   66.585mSec     0x9C132C3D   98.556mSec
[0]  #4: 0xC7F3EBBD   66.626mSec     0xEFBD54DF   98.468mSec
[0] ChecksumTest end

// On Windows XP sp3
[0] ChecksumTest start
[0]  Number of buffer allocation bytes: 67108864
[0]          TYPE_ADLER32                 TYPE_CRC32
[0]       checksum     time           checksum     time
[0]  =============================+=======================
[0]  #1: 0xFF741C1F  359.375mSec     0xC2936697  234.375mSec
[0]  #2: 0x0CDF5178  296.875mSec     0xD83702E5  218.750mSec
[0]  #3: 0x39D2C695  296.875mSec     0x69841458  218.750mSec
[0]  #4: 0x1B1E9F2B  312.500mSec     0x5FBC44AD  218.750mSec
[0] ChecksumTest end
