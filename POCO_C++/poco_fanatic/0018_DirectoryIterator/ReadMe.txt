//
//  DirectoryIterator ReadMe.txt
//
//  Created by Setsu on 5/23/2010.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is DirectoryIterator?
//----------------------------------------
Sample code which uses Poco::DirectoryIterator.
   http://pocoproject.org/docs/Poco.DirectoryIterator.html

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
Open DirectoryIteratorTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for DirectoryIteratorTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
[0] DirectoryIteratorTest start
[0] 
[0] --- create sample directories and files ---
[0]   testDir1 created
[0]     testDir1/testFile1_0.txt created
[0]     testDir1/testFile1_1.txt created
[0]     testDir1/testFile1_2.txt created
[0]   testDir1/testDir2 created
[0]     testDir1/testDir2/testFile2_0.txt created
[0]     testDir1/testDir2/testFile2_1.txt created
[0]     testDir1/testDir2/testFile2_2.txt created
[0]   testDir1/testDir2/testDir3 created
[0]     testDir1/testDir2/testDir3/testFile3_0.txt created
[0]     testDir1/testDir2/testDir3/testFile3_1.txt created
[0]     testDir1/testDir2/testDir3/testFile3_2.txt created
[0] 
[0] --- show the directories and files by DirectoryIterator ---
[0]   drw 2010-05-23 08:00:00 testDir1/testDir2
[0]   drw 2010-05-23 08:00:00 testDir1/testDir2/testDir3
[0]   -rw 2010-05-23 08:00:00 testDir1/testDir2/testDir3/testFile3_0.txt
[0]   -rw 2010-05-23 08:00:00 testDir1/testDir2/testDir3/testFile3_1.txt
[0]   -rw 2010-05-23 08:00:00 testDir1/testDir2/testDir3/testFile3_2.txt
[0]   -rw 2010-05-23 08:00:00 testDir1/testDir2/testFile2_0.txt
[0]   -rw 2010-05-23 08:00:00 testDir1/testDir2/testFile2_1.txt
[0]   -rw 2010-05-23 08:00:00 testDir1/testDir2/testFile2_2.txt
[0]   -rw 2010-05-23 08:00:00 testDir1/testFile1_0.txt
[0]   -rw 2010-05-23 08:00:00 testDir1/testFile1_1.txt
[0]   -rw 2010-05-23 08:00:00 testDir1/testFile1_2.txt
[0] 
[0] DirectoryIteratorTest end
