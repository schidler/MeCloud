//
//  UUID ReadMe.txt
//
//  Created by Setsu on 5/30/2010.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is UUID?
//----------------------------------------
Sample code which uses Poco::UUID.
   http://pocoproject.org/docs/Poco.UUID.html

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
Open UUIDTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for UUIDTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
[0] UUIDTest start
[0] --- Poco::UUID static methods ---
[0]   dns()  : 6ba7b810-9dad-11d1-80b4-00c04fd430c8 [version=1]
[0]   nil()  : 00000000-0000-0000-0000-000000000000 [version=0]
[0]   oid()  : 6ba7b812-9dad-11d1-80b4-00c04fd430c8 [version=1]
[0]   uri()  : 6ba7b811-9dad-11d1-80b4-00c04fd430c8 [version=1]
[0]   x500() : 6ba7b814-9dad-11d1-80b4-00c04fd430c8 [version=1]
[0] --- Poco::UUIDGenerator (1 of 2) ---
[0]   create()       : 7e55cbcc-6f4d-11df-9308-0016cbb0aae4 [version=1]
[0]   createOne()    : 7e55cd5c-6f4d-11df-979e-0016cbb0aae4 [version=1]
[0]   createRandom() : ff8345b3-5099-4f32-9316-de57ff6e740e [version=4]
[0]   createFromName(dns(),  "test") : 45a113ac-c7f2-30b0-90a5-a399ab912716 [version=3]
[0]   createFromName(oid(),  "test") : 61df151d-7508-321d-ada6-27936752b809 [version=3]
[0]   createFromName(uri(),  "test") : 1cf93550-8eb4-3c32-a229-826cf8c1be59 [version=3]
[0]   createFromName(x500(), "test") : d9c53a66-fde2-3d04-b5ad-dce3848df07e [version=3]
[0] --- Poco::UUIDGenerator (2 of 2) ---
[0]   create()       : 7e55d860-6f4d-11df-806d-0016cbb0aae4 [version=1]
[0]   createOne()    : 7e55d95a-6f4d-11df-8bba-0016cbb0aae4 [version=1]
[0]   createRandom() : 24b89f2a-37bf-4447-962f-1aa6d9030cba [version=4]
[0]   createFromName(dns(),  "test") : 45a113ac-c7f2-30b0-90a5-a399ab912716 [version=3]
[0]   createFromName(oid(),  "test") : 61df151d-7508-321d-ada6-27936752b809 [version=3]
[0]   createFromName(uri(),  "test") : 1cf93550-8eb4-3c32-a229-826cf8c1be59 [version=3]
[0]   createFromName(x500(), "test") : d9c53a66-fde2-3d04-b5ad-dce3848df07e [version=3]
[0] UUIDTest end
