//
//  HashSet ReadMe.txt
//
//  Created by Setsu on 5/2/10.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is HashSet?
//----------------------------------------
Sample code which uses Poco::HashSet.
   http://pocoproject.org/docs/Poco.HashSet.html

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
Open HashSetTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for HashSetTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
------------------------------------
Comparison for key type Poco::UInt32
------------------------------------
[0] std::set insert start
[0]  Elepsed time = 191.453mSec
[0] std::set insert end
[0] HashSet  insert start
[0]  Elepsed time = 286.784mSec
[0] HashSet  insert end

[0] std::set find start
[0]  Elepsed time = 150.107mSec
[0] std::set find end
[0] HashSet  find start
[0]  Elepsed time = 36.377mSec
[0] HashSet  find end

[0] std::set erase start
[0]  Elepsed time = 262.271mSec
[0] std::set erase end
[0] HashSet  erase start
[0]  Elepsed time = 117.745mSec
[0] HashSet  erase end

----------------------------------------------
Comparison for key type std::string (length=8)
----------------------------------------------
[0] std::set insert start
[0]  Elepsed time = 434.074mSec
[0] std::set insert end
[0] HashSet  insert start
[0]  Elepsed time = 602.558mSec
[0] HashSet  insert end

[0] std::set find start
[0]  Elepsed time = 405.215mSec
[0] std::set find end
[0] HashSet  find start
[0]  Elepsed time = 102.051mSec
[0] HashSet  find end

[0] std::set erase start
[0]  Elepsed time = 603.113mSec
[0] std::set erase end
[0] HashSet  erase start
[0]  Elepsed time = 260.250mSec
[0] HashSet  erase end
