//
//  URIStreamOpener ReadMe.txt
//
//  Created by Setsu on 6/2/2010.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is URIStreamOpener?
//----------------------------------------
Sample code which uses Poco::URIStreamOpener.
   http://pocoproject.org/docs/Poco.URIStreamOpener.html

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
Open URIStreamOpenerTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for URIStreamOpenerTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
[0] URIStreamOpenerTest start
[0]  --- http://poco.roundsquare.net/downloads/test.txt ---
[0]  <start>
---  This is a sample text file for HTTPClientSessionTest  ---
[0]  <end>
[0]  --- ftp://ftp.iij.ad.jp/pub/linux/debian/dists/README ---
[0]      (user=anonymous, password=poco@localhost)
[0]  <start>
This directory, dists, is the canonical way to access the distributions.
Each distribution can be accessed by name or state from here.

oldstable, or etch  - the released Debian 4.0r9.
stable, or lenny    - the released Debian 5.0.4.
oldstable-proposed-updates  - possible updates to Debian 4.0.  See the README there.
proposed-updates    - possible updates to Debian 5.0.  See the README there.
testing, or squeeze - the development version of the next release.
unstable, or sid    - untested candidate packages for future releases.
[0]  <end>
[0]  --- file:///var/folders/iR/iRcZrcWkGCe6fDFVNkPVjE+++TI/-Tmp-/tmp3929aaaaaa ---
[0]  <start>
Hello, world!
[0]  <end>
[0] URIStreamOpenerTest end
