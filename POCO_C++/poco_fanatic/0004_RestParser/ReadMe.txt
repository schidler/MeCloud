//
//  RestParser ReadMe.txt
//
//  Created by Setsu on 4/24/10.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is RestParser?
//----------------------------------------
REST parsing class which uses Poco::StringTokenizer.
   http://pocoproject.org/docs/Poco.StringTokenizer.html

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
Open RestParser.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for RestParserTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
[0] ParseRest start
[0]  sourceUrl = http://www.google.co.jp/search?source=ig&hl=ja&rlz=&q=POCO+Fanatic&meta=lr%3D&aq=f&aqi=&aql=&oq=&gs_rfai=
[0]   url = http://www.google.co.jp/search
[0]   (key, value)[0] = (aq, f)
[0]   (key, value)[1] = (aqi, )
[0]   (key, value)[2] = (aql, )
[0]   (key, value)[3] = (gs_rfai, )
[0]   (key, value)[4] = (hl, ja)
[0]   (key, value)[5] = (meta, lr%3D)
[0]   (key, value)[6] = (oq, )
[0]   (key, value)[7] = (q, POCO+Fanatic)
[0]   (key, value)[8] = (rlz, )
[0]   (key, value)[9] = (source, ig)
[0] ParseRest end
