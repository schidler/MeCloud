//
//  FileStream ReadMe.txt
//
//  Created by Setsu on 5/20/2010.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is FileStream?
//----------------------------------------
Sample code which uses Poco::FileStream.
   http://pocoproject.org/docs/Poco.FileStream.html

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
Open FileStream.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for FileStreamTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
[0] FileStreamTest start
[0] 
[0]  --- Simple file wrie/read ---
[0]   File size        : 473 bytes
[0]   Write/Read check : OK
[0] 
[0]  --- Simple file wrie/read with counting stream ---
[0]   Characters       : 473
[0]   Lines            : 7
[0]   File size        : 473 bytes
[0]   Write/Read check : OK
[0]   Characters       : 473
[0]   Lines            : 7
[0] 
[0]  --- GZIP compressing file wrie/read ---
[0]   File size        : 282 bytes (59.62% of original)
[0]   Write/Read check : OK
[0] 
[0]  --- ZLIB compressing file wrie/read ---
[0]   File size        : 270 bytes (57.08% of original)
[0]   Write/Read check : OK
[0] 
[0]  --- Base64 encoding file wrie/read ---
[0]   File size        : 648 bytes (137.00% of original)
[0]   Write/Read check : OK
[0] 
[0]  --- HexBinary encoding file wrie/read ---
[0]   File size        : 959 bytes (202.75% of original)
[0]   Write/Read check : OK
[0] 
[0]  --- QuotedPrintable encoding file wrie/read ---
[0]   File size        : 473 bytes (100.00% of original)
[0]   Write/Read check : OK
[0] 
[0] FileStreamTest end
