//
//  SharedLibrary ReadMe.txt
//
//  Created by Setsu on 7/24/10.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is SharedLibrary?
//----------------------------------------
Message logging class which uses Poco::SharedLibrary.
   http://pocoproject.org/docs/Poco.SharedLibrary.html

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
     sudo make install

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
     sudo make install

//----------------------------------------
// Building on Windows
//  NOTE: Assuming environment variable POCO_BASE is properly defined.
//----------------------------------------
Open SharedLibraryTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for SharedLibraryTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
// On Linux
[0] SharedLibraryTest start
[0]  "libSharedLibrary.so" is loaded
[0]  Hello SharedLibrary world!
[0] SharedLibraryTest end

// On Macintosh OSX 10.6.4
[0] SharedLibraryTest start
[0]  "libSharedLibrary.dylib" is loaded
[0]  Hello SharedLibrary world!
[0] SharedLibraryTest end

// On Windows XP sp3
[0] SharedLibraryTest start
[0]  "libSharedLibrary.dll" is loaded
[0]  Hello SharedLibrary world!
[0] SharedLibraryTest end
