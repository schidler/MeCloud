//
//  File ReadMe.txt
//
//  Created by Setsu on 5/18/2010.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is File?
//----------------------------------------
Sample code which uses Poco::File.
   http://pocoproject.org/docs/Poco.File.html

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
Open FileTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for FileTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
// On Linux
[0] FileTest start
[0]   testDir1/testDir2/testDir3 created
[0]     isDevice()        : false
[0]     isDirectory()     : true
[0]     isFile()          : false
[0]     isHidden()        : false
[0]     isLink()          : false
[0]     canExecute()      : true
[0]     canRead()         : true
[0]     canWrite()        : true
[0]     getSize()         : 4096
[0]     created()         : Wed May 19 19:38:19 JST 2010
[0]     getLastModified() : Wed May 19 19:38:19 JST 2010
[0] 
[0]   testDir1/testDir2/testDir3/testFile.txt created
[0]     isDevice()        : false
[0]     isDirectory()     : false
[0]     isFile()          : true
[0]     isHidden()        : false
[0]     isLink()          : false
[0]     canExecute()      : false
[0]     canRead()         : true
[0]     canWrite()        : true
[0]     getSize()         : 0
[0]     created()         : Wed May 19 19:38:19 JST 2010
[0]     getLastModified() : Wed May 19 19:38:19 JST 2010
[0] 
[0]   change testDir1/testDir2/testDir3/testFile.txt characteristics
[0]     isDevice()        : false
[0]     isDirectory()     : false
[0]     isFile()          : true
[0]     isHidden()        : false
[0]     isLink()          : false
[0]     canExecute()      : true
[0]     canRead()         : true
[0]     canWrite()        : false
[0]     getSize()         : 0
[0]     created()         : Wed May 19 19:38:19 JST 2010
[0]     getLastModified() : Wed May 19 19:38:19 JST 2010
[0] 
[0]   testDir1/testDir2/testDir3/renamedFile.txt renamed
[0] 
[0]   testDir1 removed
[0] FileTest end

// On Macintosh OSX 10.6.3
[0] FileTest start
[0]   testDir1/testDir2/testDir3 created
[0]     isDevice()        : false
[0]     isDirectory()     : true
[0]     isFile()          : false
[0]     isHidden()        : false
[0]     isLink()          : false
[0]     canExecute()      : true
[0]     canRead()         : true
[0]     canWrite()        : true
[0]     getSize()         : 68
[0]     created()         : Tue May 18 05:43:36 JST 2010
[0]     getLastModified() : Tue May 18 05:43:36 JST 2010
[0] 
[0]   testDir1/testDir2/testDir3/testFile.txt created
[0]     isDevice()        : false
[0]     isDirectory()     : false
[0]     isFile()          : true
[0]     isHidden()        : false
[0]     isLink()          : false
[0]     canExecute()      : false
[0]     canRead()         : true
[0]     canWrite()        : true
[0]     getSize()         : 0
[0]     created()         : Tue May 18 05:43:36 JST 2010
[0]     getLastModified() : Tue May 18 05:43:36 JST 2010
[0] 
[0]   change testDir1/testDir2/testDir3/testFile.txt characteristics
[0]     isDevice()        : false
[0]     isDirectory()     : false
[0]     isFile()          : true
[0]     isHidden()        : false
[0]     isLink()          : false
[0]     canExecute()      : true
[0]     canRead()         : true
[0]     canWrite()        : false
[0]     getSize()         : 0
[0]     created()         : Tue May 18 05:43:36 JST 2010
[0]     getLastModified() : Tue May 18 05:43:36 JST 2010
[0] 
[0]   testDir1/testDir2/testDir3/renamedFile.txt renamed
[0] 
[0]   testDir1 removed
[0] FileTest end

// On Windows XP sp3 (in Japanese locale)
[0] FileTest start
[0]   testDir1\testDir2\testDir3 created
[0]     isDevice()        : EXCEPTION [Access to file denied]
[0]     isDirectory()     : true
[0]     isFile()          : false
[0]     isHidden()        : false
[0]     isLink()          : false
[0]     canExecute()      : false
[0]     canRead()         : true
[0]     canWrite()        : true
[0]     getSize()         : 0
[0]     created()         : Wed May 19 19:31:32 東京 (標準時) 2010
[0]     getLastModified() : Wed May 19 19:31:32 東京 (標準時) 2010
[0] 
[0]   testDir1\testDir2\testDir3\testFile.txt created
[0]     isDevice()        : false
[0]     isDirectory()     : false
[0]     isFile()          : true
[0]     isHidden()        : false
[0]     isLink()          : false
[0]     canExecute()      : false
[0]     canRead()         : true
[0]     canWrite()        : true
[0]     getSize()         : 0
[0]     created()         : Wed May 19 19:31:32 東京 (標準時) 2010
[0]     getLastModified() : Wed May 19 19:31:32 東京 (標準時) 2010
[0] 
[0]   change testDir1\testDir2\testDir3\testFile.txt characteristics
[0]     isDevice()        : false
[0]     isDirectory()     : false
[0]     isFile()          : true
[0]     isHidden()        : false
[0]     isLink()          : false
[0]     canExecute()      : false
[0]     canRead()         : true
[0]     canWrite()        : false
[0]     getSize()         : 0
[0]     created()         : Wed May 19 19:31:32 東京 (標準時) 2010
[0]     getLastModified() : Wed May 19 19:31:32 東京 (標準時) 2010
[0] 
[0]   testDir1\testDir2\testDir3\renamedFile.txt renamed
[0] 
[0]   testDir1 removed
[0] FileTest end
