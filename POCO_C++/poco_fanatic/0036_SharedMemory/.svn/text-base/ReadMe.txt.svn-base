//
//  SharedMemory ReadMe.txt
//
//  Created by Setsu on 6/27/10.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is SharedMemory?
//----------------------------------------
Message logging class which uses Poco::SharedMemory.
   http://pocoproject.org/docs/Poco.SharedMemory.html

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
Open SharedMemoryTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for SharedMemoryTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
// On Linux and Macintosh OSX 10.6.4
[0] SharedMemoryTest start
[1]  launch "./SharedMemoryTestServer"
SharedMemoryServer starting up
[2]  launch "./SharedMemoryTestClient"
SharedMemoryClient starting up
ServerTask: A - a
ServerTask: A - a (named)
ClientTask: A - a
ClientTask: A - a (named)
ServerTask: B - b
ServerTask: B - b (named)
ClientTask: B - b
ClientTask: B - b (named)
ServerTask: C - c
ServerTask: C - c (named)
ClientTask: C - c
ClientTask: C - c (named)
ServerTask: D - d
ServerTask: D - d (named)
ClientTask: D - d
ClientTask: D - d (named)
ServerTask: E - e
ServerTask: E - e (named)
ClientTask: E - e
ClientTask: E - e (named)
ServerTask: F - f
ServerTask: F - f (named)
ClientTask: F - f
ClientTask: F - f (named)
ServerTask: G - g
ServerTask: G - g (named)
ClientTask: G - g
ClientTask: G - g (named)
[0]  "./SharedMemoryTestClient" requestTermination
SharedMemoryClient shutting down
[0]  "./SharedMemoryTestClient" terminated with return code = 0
[0]  "./SharedMemoryTestServer" requestTermination
SharedMemoryServer shutting down
[0]  "./SharedMemoryTestServer" terminated with return code = 0
[0] SharedMemoryTest end

// On Windows XP sp3
[0] SharedMemoryTest start
[1]  launch "SharedMemoryTestServer.exe"
SharedMemoryServer starting up
[2]  launch "SharedMemoryTestClient.exe"
SharedMemoryClient starting up
ServerTask: A - a
ServerTask: A - a (named)
ClientTask: A - a
ClientTask: A - a (named)
ServerTask: B - b
ServerTask: B - b (named)
ClientTask: B - b
ClientTask: B - b (named)
ServerTask: C - c
ServerTask: C - c (named)
ClientTask: C - c
ClientTask: C - c (named)
ServerTask: D - d
ServerTask: D - d (named)
ClientTask: D - d
ClientTask: D - d (named)
ServerTask: E - e
ServerTask: E - e (named)
ClientTask: E - e
ClientTask: E - e (named)
ServerTask: F - f
ServerTask: F - f (named)
ClientTask: F - f
ClientTask: F - f (named)
ServerTask: G - g
ServerTask: G - g (named)
ClientTask: G - g
ClientTask: G - g (named)
[0]  "SharedMemoryTestClient.exe" requestTermination
SharedMemoryClient shutting down
[0]  "SharedMemoryTestClient.exe" terminated with return code = 0
[0]  "SharedMemoryTestServer.exe" requestTermination
SharedMemoryServer shutting down
[0]  "SharedMemoryTestServer.exe" terminated with return code = 0
[0] SharedMemoryTest end
