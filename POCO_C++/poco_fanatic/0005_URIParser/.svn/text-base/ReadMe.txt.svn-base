//
//  URIParser ReadMe.txt
//
//  Created by Setsu on 4/26/10.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is URIParser?
//----------------------------------------
URI parsing class which uses Poco::URI.
   http://pocoproject.org/docs/Poco.URI.html

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
Open URIPerser.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for URIParserTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
[0] ParseURI start
[0]  sourceUri = http://www.google.co.jp/search?source=ig&hl=ja&rlz=&q=POCO+Fanatic&meta=lr%3D&aq=f&aqi=&aql=&oq=&gs_rfai=
[0]     scheme = http
[0]   userInfo = 
[0]       host = www.google.co.jp
[0]       port = 80
[0]  authority = www.google.co.jp
[0]       path = /search
[0]              path[0] = search
[0]      query = source=ig&hl=ja&rlz=&q=POCO+Fanatic&meta=lr=&aq=f&aqi=&aql=&oq=&gs_rfai=
[0]              query[0] = (aq, f)
[0]              query[1] = (aqi, )
[0]              query[2] = (aql, )
[0]              query[3] = (gs_rfai, )
[0]              query[4] = (hl, ja)
[0]              query[5] = (meta, lr)
[0]              query[6] = (oq, )
[0]              query[7] = (q, POCO+Fanatic)
[0]              query[8] = (rlz, )
[0]              query[9] = (source, ig)
[0]   fragment = 
[0] ParseURI end
