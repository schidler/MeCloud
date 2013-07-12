//
//  LRUCache ReadMe.txt
//
//  Created by Setsu on 4/29/10.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is LRUCache?
//----------------------------------------
Sample code which uses Poco::LRUCache.
   http://pocoproject.org/docs/Poco.LRUCache.html

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
Open LRUCache.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for LRUCacheTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
[0] write SlowBuffer (addr inc) start
[0]  Elepsed time = 784.025mSec
[0] write SlowBuffer (addr inc) end
[0] read  SlowBuffer (addr dec) start
[0]  Elepsed time = 781.478mSec
[0] read  SlowBuffer (addr dec) end
[0] read  SlowBuffer (addr   0) start
[0]  Elepsed time = 780.122mSec
[0] read  SlowBuffer (addr   0) end

[0] write CachedSlowBuffer (addr inc) start
[0]  Elepsed time = 780.248mSec
[0] write CachedSlowBuffer (addr inc) end
[0] read  CachedSlowBuffer (addr dec) start
[0]  Elepsed time = 1.214mSec
[0] read  CachedSlowBuffer (addr dec) end
[0] read  CachedSlowBuffer (addr   0) start
[0]  Elepsed time = 1.197mSec
[0] read  CachedSlowBuffer (addr   0) end
