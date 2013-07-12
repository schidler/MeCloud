//
//  Path ReadMe.txt
//
//  Created by Setsu on 5/16/2010.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is Path?
//----------------------------------------
Sample code which uses Poco::Path.
   http://pocoproject.org/docs/Poco.Path.html

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
Open PathTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for PathTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
// On Linux
[0] PathTest start
[0] 
[0] --- Static methods ---
[0]   home()       (Home directory): /home/setsu/
[0]   expand("~/")                 : /home/setsu/
[0]   current() (Current directory): /home/setsu/Desktop/Poco_Web/Path/
[0]   temp()  (Temporary directory): /tmp/
[0]   separator()                  : /
[0]   pathSeparator()              : :
[0]   null()          (Null device): /dev/null
[0]   listRoots(roots)
[0]     root[0]: /
[0] 
[0] --- Relative path ---
[0]   dirPath("./")               : 
[0]     isAbsolute() : false
[0]     isRelative() : true
[0]     isDirectory(): true
[0]     isFile()     : false
[0]   filePath(dirPath)           : 
[0]   filePath.setFileName("temp"): temp
[0]   filePath.setExtension("txt"): temp.txt
[0]     isAbsolute() : false
[0]     isRelative() : true
[0]     isDirectory(): false
[0]     isFile()     : true
[0] 
[0] --- Absolute path ---
[0]   absDirPath(dirPath.makeAbsolute())  : /home/setsu/Desktop/Poco_Web/Path/
[0]     isAbsolute() : true
[0]     isRelative() : false
[0]     isDirectory(): true
[0]     isFile()     : false
[0]   absFilePath(filePath.makeAbsolute()): /home/setsu/Desktop/Poco_Web/Path/temp.txt
[0]     isAbsolute() : true
[0]     isRelative() : false
[0]     isDirectory(): false
[0]     isFile()     : true
[0] 
[0] PathTest end

// On Macintosh OSX 10.6.3
[0] PathTest start
[0] 
[0] --- Static methods ---
[0]   home()       (Home directory): /Users/Setsu/
[0]   expand("~/")                 : /Users/Setsu/
[0]   current() (Current directory): /Users/Setsu/Desktop/Poco_Web/Path/
[0]   temp()  (Temporary directory): /var/folders/iR/iRcZrcWkGCe6fDFVNkPVjE+++TI/-Tmp-/
[0]   separator()                  : /
[0]   pathSeparator()              : :
[0]   null()          (Null device): /dev/null
[0]   listRoots(roots)
[0]     root[0]: /
[0] 
[0] --- Relative path ---
[0]   dirPath("./")               : 
[0]     isAbsolute() : false
[0]     isRelative() : true
[0]     isDirectory(): true
[0]     isFile()     : false
[0]   filePath(dirPath)           : 
[0]   filePath.setFileName("temp"): temp
[0]   filePath.setExtension("txt"): temp.txt
[0]     isAbsolute() : false
[0]     isRelative() : true
[0]     isDirectory(): false
[0]     isFile()     : true
[0] 
[0] --- Absolute path ---
[0]   absDirPath(dirPath.makeAbsolute())  : /Users/Setsu/Desktop/Poco_Web/Path/
[0]     isAbsolute() : true
[0]     isRelative() : false
[0]     isDirectory(): true
[0]     isFile()     : false
[0]   absFilePath(filePath.makeAbsolute()): /Users/Setsu/Desktop/Poco_Web/Path/temp.txt
[0]     isAbsolute() : true
[0]     isRelative() : false
[0]     isDirectory(): false
[0]     isFile()     : true
[0] 
[0] PathTest end

// On Windows XP sp3
[0] PathTest start
[0] 
[0] --- Static methods ---
[0]   home()       (Home directory): C:\Documents and Settings\setsu\
[0]   expand("~/")                 : ~/
[0]   current() (Current directory): c:\Documents and Settings\setsu\デスクトップ\Poco_Web\Path\
[0]   temp()  (Temporary directory): C:\DOCUME~1\setsu\LOCALS~1\Temp\
[0]   separator()                  : \
[0]   pathSeparator()              : ;
[0]   null()          (Null device): NUL:
[0]   listRoots(roots)
[0]     root[0]: A:\
[0]     root[1]: C:\
[0]     root[2]: D:\
[0]     root[3]: Z:\
[0] 
[0] --- Relative path ---
[0]   dirPath("./")               : 
[0]     isAbsolute() : false
[0]     isRelative() : true
[0]     isDirectory(): true
[0]     isFile()     : false
[0]   filePath(dirPath)           : 
[0]   filePath.setFileName("temp"): temp
[0]   filePath.setExtension("txt"): temp.txt
[0]     isAbsolute() : false
[0]     isRelative() : true
[0]     isDirectory(): false
[0]     isFile()     : true
[0] 
[0] --- Absolute path ---
[0]   absDirPath(dirPath.makeAbsolute())  : c:\Documents and Settings\setsu\デスクトップ\Poco_Web\Path\
[0]     isAbsolute() : true
[0]     isRelative() : false
[0]     isDirectory(): true
[0]     isFile()     : false
[0]   absFilePath(filePath.makeAbsolute()): c:\Documents and Settings\setsu\デスクトップ\Poco_Web\Path\temp.txt
[0]     isAbsolute() : true
[0]     isRelative() : false
[0]     isDirectory(): false
[0]     isFile()     : true
[0] 
[0] PathTest end

