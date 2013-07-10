//
//  MemoryPool ReadMe.txt
//
//  Created by Setsu on 6/13/2010.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is MemoryPool?
//----------------------------------------
Sample code which uses Poco::MemoryPool.
   http://pocoproject.org/docs/Poco.MemoryPool.html

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
Open MemoryPoolTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for MemoryPoolTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
[0] MemoryPoolTest start
[0] --- TestBasics ---
[0]  Poco::MemoryPool(256, 0, 4)
[0]   blockSize()=256, allocated()=0, available()=0
[0]  pool.get()
[0]   blockSize()=256, allocated()=1, available()=0
[0]   blockSize()=256, allocated()=2, available()=0
[0]   blockSize()=256, allocated()=3, available()=0
[0]   blockSize()=256, allocated()=4, available()=0
[0]  calling pool.get() more than 4 fails
[0]  pool.release()
[0]   blockSize()=256, allocated()=4, available()=1
[0]   blockSize()=256, allocated()=4, available()=2
[0]   blockSize()=256, allocated()=4, available()=3
[0]   blockSize()=256, allocated()=4, available()=4
[0]  pool.get() again
[0]   blockSize()=256, allocated()=4, available()=3
[0]   blockSize()=256, allocated()=4, available()=2
[0]   blockSize()=256, allocated()=4, available()=1
[0]   blockSize()=256, allocated()=4, available()=0
[0] --- TestSpeed ---
[0]  number of allocation blocks = 1048576
[0]  measuring new/delete...
[0]  measuring Poco::MemoryPool(256, 0, 1048576)...
[0]  measuring Poco::MemoryPool(256, 1048576, 1048576)...
[0]                  new/delete   non pre-allocated   pre-allocated
[0] ================================================================
[0]   init             0.001mSec       0.015mSec        86.591mSec
[0]   allocate #1     84.544mSec     121.834mSec        40.697mSec
[0] deallocate #1    499.517mSec      64.868mSec        39.726mSec
[0]   allocate #2     83.324mSec      40.682mSec        40.683mSec
[0] deallocate #2    495.804mSec      39.706mSec        39.716mSec
[0]   allocate #3     83.412mSec      40.692mSec        40.680mSec
[0] deallocate #3    504.934mSec      39.738mSec        39.743mSec
[0]   cleanup          0.000mSec     499.142mSec       486.371mSec
[0] ================================================================
[0]   total time    1751.557mSec     846.687mSec       814.214mSec
[0] MemoryPoolTest end
