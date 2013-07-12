//
//  Process ReadMe.txt
//
//  Created by Setsu on 6/26/10.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is Process?
//----------------------------------------
Message logging class which uses Poco::Process.
   http://pocoproject.org/docs/Poco.Process.html

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
Open ProcessTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for ProcessTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
// On Linux
[0] ProcessTest start
[0]  launch "date -u"
Sat Jun 26 19:26:37 UTC 2010
[0]   return code = 0
[0]  launch "ls -la"
total 492
drwxr-xr-x  5 setsu setsu   4096 2010-06-27 04:26 .
drwxr-xr-x 40 setsu setsu   4096 2010-06-27 04:25 ..
-rw-r--r--  1 setsu setsu  32230 2010-06-27 04:25 aclocal.m4
-rw-r--r--  1 setsu setsu      0 2010-06-27 04:25 AUTHORS
drwxr-xr-x  2 setsu setsu   4096 2010-06-27 04:25 autom4te.cache
-rwxr-xr-x  1 setsu setsu    228 2010-06-27 04:25 bootstrap
-rw-r--r--  1 setsu setsu      0 2010-06-27 04:25 ChangeLog
-rw-r--r--  1 setsu setsu   1980 2010-06-27 04:26 config.h
-rw-r--r--  1 setsu setsu   1741 2010-06-27 04:25 config.h.in
-rw-r--r--  1 setsu setsu  14617 2010-06-27 04:26 config.log
-rwxr-xr-x  1 setsu setsu  30590 2010-06-27 04:26 config.status
-rwxr-xr-x  1 setsu setsu 185149 2010-06-27 04:25 configure
-rwxr-xr-x  1 setsu setsu    657 2010-06-27 04:25 configure.in
-rw-r--r--  1 setsu setsu      0 2010-06-27 04:25 COPYING
-rw-r--r--  1 setsu setsu     89 2010-06-27 04:25 date.bat
-rwxr-xr-x  1 setsu setsu  17867 2010-06-27 04:25 depcomp
drwxr-xr-x  2 setsu setsu   4096 2010-06-27 04:26 .deps
-rw-r--r--  1 setsu setsu      0 2010-06-27 04:25 INSTALL
-rwxr-xr-x  1 setsu setsu  13620 2010-06-27 04:25 install-sh
-rw-r--r--  1 setsu setsu     19 2010-06-27 04:25 ls.bat
-rw-r--r--  1 setsu setsu  19407 2010-06-27 04:26 Makefile
-rwxr-xr-x  1 setsu setsu    167 2010-06-27 04:25 Makefile.am
-rw-r--r--  1 setsu setsu  19283 2010-06-27 04:25 Makefile.in
-rwxr-xr-x  1 setsu setsu  11135 2010-06-27 04:25 missing
-rw-r--r--  1 setsu setsu      0 2010-06-27 04:25 NEWS
-rwxr-xr-x  1 setsu setsu  23907 2010-06-27 04:26 ProcessTest
-rw-r--r--  1 setsu setsu   3645 2010-06-27 04:25 ProcessTest.cpp
-rw-r--r--  1 setsu setsu  16232 2010-06-27 04:26 ProcessTest.o
-rw-r--r--  1 setsu setsu    891 2010-06-27 04:25 ProcessTest.sln
-rw-r--r--  1 setsu setsu   4183 2010-06-27 04:25 ProcessTest.vcproj
-rw-r--r--  1 setsu setsu      0 2010-06-27 04:25 README
-rwxr-xr-x  1 setsu setsu   6991 2010-06-27 04:25 ReadMe.txt
-rwxr-xr-x  1 setsu setsu   3221 2010-06-27 04:25 ScopedLogMessage.cpp
-rwxr-xr-x  1 setsu setsu   2229 2010-06-27 04:25 ScopedLogMessage.h
-rw-r--r--  1 setsu setsu  10652 2010-06-27 04:26 ScopedLogMessage.o
-rw-r--r--  1 setsu setsu     23 2010-06-27 04:26 stamp-h1
drwxr-xr-x  6 setsu setsu   4096 2010-06-27 04:25 .svn
[0]   return code = 0
[0] ProcessTest end

// On Macintosh OSX 10.6.4
[0] ProcessTest start
[0]  launch "date -u"
Sat Jun 26 19:22:55 UTC 2010
[0]   return code = 0
[0]  launch "ls -la"
total 984
drwxr-xr-x  38 Setsu  Setsu    1292 Jun 27 04:22 .
drwxr-xr-x  46 Setsu  Setsu    1564 Jun 27 04:13 ..
drwxr-xr-x   4 Setsu  Setsu     136 Jun 27 04:22 .deps
drwxr-xr-x   8 Setsu  Setsu     272 Jun 27 04:19 .svn
-rw-r--r--   1 Setsu  Setsu       0 Jun 27 04:04 AUTHORS
-rw-r--r--   1 Setsu  Setsu       0 Jun 27 04:04 COPYING
-rw-r--r--   1 Setsu  Setsu       0 Jun 27 04:04 ChangeLog
-rw-r--r--   1 Setsu  Setsu       0 Jun 27 04:04 INSTALL
-rw-r--r--   1 Setsu  Setsu   19417 Jun 27 04:04 Makefile
-rwxr-xr-x   1 Setsu  Setsu     167 Jun 27 04:04 Makefile.am
-rw-r--r--   1 Setsu  Setsu   19321 Jun 27 04:04 Makefile.in
-rw-r--r--   1 Setsu  Setsu       0 Jun 27 04:04 NEWS
-rwxr-xr-x   1 Setsu  Setsu   28584 Jun 27 04:22 ProcessTest
-rw-r--r--@  1 Setsu  Setsu    3645 Jun 27 04:22 ProcessTest.cpp
-rw-r--r--   1 Setsu  Setsu   15760 Jun 27 04:22 ProcessTest.o
-rw-r--r--   1 Setsu  Setsu     891 Jun 27 04:04 ProcessTest.sln
-rw-r--r--   1 Setsu  Setsu    4183 Jun 27 04:04 ProcessTest.vcproj
-rw-r--r--   1 Setsu  Setsu       0 Jun 27 04:04 README
-rwxr-xr-x   1 Setsu  Setsu    6639 Jun 27 04:04 ReadMe.txt
-rwxr-xr-x   1 Setsu  Setsu    3221 Jun 27 04:04 ScopedLogMessage.cpp
-rwxr-xr-x   1 Setsu  Setsu    2229 Jun 27 04:04 ScopedLogMessage.h
-rw-r--r--   1 Setsu  Setsu    8816 Jun 27 04:04 ScopedLogMessage.o
-rw-r--r--   1 Setsu  Setsu   32230 Jun 27 04:04 aclocal.m4
drwxr-xr-x   7 Setsu  Setsu     238 Jun 27 04:04 autom4te.cache
-rwxr-xr-x   1 Setsu  Setsu     228 Jun 27 04:04 bootstrap
-rwxr-xr-x   1 Setsu  Setsu     229 Jun 27 04:04 bootstrap.mac
-rw-r--r--   1 Setsu  Setsu    1980 Jun 27 04:04 config.h
-rw-r--r--   1 Setsu  Setsu    1741 Jun 27 04:04 config.h.in
-rw-r--r--   1 Setsu  Setsu   18067 Jun 27 04:04 config.log
-rwxr-xr-x   1 Setsu  Setsu   33623 Jun 27 04:04 config.status
-rwxr-xr-x   1 Setsu  Setsu  194449 Jun 27 04:04 configure
-rwxr-xr-x   1 Setsu  Setsu     657 Jun 27 04:04 configure.in
-rw-r--r--   1 Setsu  Setsu      89 Jun 27 04:04 date.bat
-rwxr-xr-x   1 Setsu  Setsu   17867 Jun 27 04:04 depcomp
-rwxr-xr-x   1 Setsu  Setsu   13620 Jun 27 04:04 install-sh
-rw-r--r--   1 Setsu  Setsu      19 Jun 27 04:04 ls.bat
-rwxr-xr-x   1 Setsu  Setsu   11135 Jun 27 04:04 missing
-rw-r--r--   1 Setsu  Setsu      23 Jun 27 04:04 stamp-h1
[0]   return code = 0
[0] ProcessTest end

// On Windows XP sp3
[0] ProcessTest start
[0]  launch "date.bat "
06 27  4:37:24 2010
[0]   return code = 0
[0]  launch "ls.bat /b"
bootstrap
configure.in
date.bat
Debug
ls.bat
Makefile.am
ProcessTest.cpp
ProcessTest.ncb
ProcessTest.sln
ProcessTest.vcproj
ProcessTest.vcproj.SETSU-SHY3M0TG8.setsu.user
ReadMe.txt
Release
ScopedLogMessage.cpp
ScopedLogMessage.h
[0]   return code = 0
[0] ProcessTest end
