//
//  Glob ReadMe.txt
//
//  Created by Setsu on 6/15/2010.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is Glob?
//----------------------------------------
Sample code which uses Poco::Glob.
   http://pocoproject.org/docs/Poco.Glob.html

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
Open GlobTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for GlobTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
[0] GlobTest start
[0]  Poco::Glob::glob("./[A-Z]*.[ch]*", files)
[0]   GlobTest.cpp
[0]   ScopedLogMessage.cpp
[0]   ScopedLogMessage.h
[0]  Poco::Glob::glob("~/.*", files, Poco::Glob::GLOB_DOT_SPECIAL)
[0]   /Users/Setsu/.CFUserTextEncoding
[0]   /Users/Setsu/.DS_Store
[0]   /Users/Setsu/.Trash/
[0]   /Users/Setsu/.Xauthority
[0]   /Users/Setsu/.Xcode/
[0]   /Users/Setsu/.appletviewer
[0]   /Users/Setsu/.bash_history
[0]   /Users/Setsu/.bash_profile
[0]   /Users/Setsu/.cups/
[0]   /Users/Setsu/.distcc/
[0]   /Users/Setsu/.emacs.d/
[0]   /Users/Setsu/.fontconfig/
[0]   /Users/Setsu/.gdb_history
[0]   /Users/Setsu/.inkscape-etc/
[0]   /Users/Setsu/.inkscape/
[0]   /Users/Setsu/.isql.history
[0]   /Users/Setsu/.lesshst
[0]   /Users/Setsu/.macports/
[0]   /Users/Setsu/.monitor
[0]   /Users/Setsu/.mysql_history
[0]   /Users/Setsu/.openbase_monitor
[0]   /Users/Setsu/.openforms
[0]   /Users/Setsu/.openforms_dev
[0]   /Users/Setsu/.pearrc
[0]   /Users/Setsu/.sqlite_history
[0]   /Users/Setsu/.ssh/
[0]   /Users/Setsu/.subversion/
[0]   /Users/Setsu/.tcshrc
[0] GlobTest end
