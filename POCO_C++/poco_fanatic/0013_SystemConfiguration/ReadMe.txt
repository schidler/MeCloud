//
//  SystemConfiguration ReadMe.txt
//
//  Created by Setsu on 5/12/10.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is SystemConfiguration?
//----------------------------------------
Sample code which uses Poco::Util::SystemConfiguration.
   http://pocoproject.org/docs/Poco.Util.SystemConfiguration.html

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
Open SystemConfigurationTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for SystemConfigurationTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
// On Linux
[0] SystemConfigurationTest start
[0]   system.osName         = Linux
[0]   system.osVersion      = 2.6.26-2-686
[0]   system.osArchitecture = i686
[0]   system.nodeName       = debian
[0]   system.currentDir     = /home/setsu/Desktop/Poco_Web/SystemConfiguration/
[0]   system.homeDir        = /home/setsu/
[0]   system.tempDir        = /tmp/
[0]   system.dateTime       = 2010-05-11T20:45:15Z
[0]   system.pid            = 4879
[0]   system.env.HOME       = /home/setsu
[0] SystemConfigurationTest end

// On Macintosh OSX 10.6.3
[0] SystemConfigurationTest start
[0]   system.osName         = Darwin
[0]   system.osVersion      = 10.3.0
[0]   system.osArchitecture = i386
[0]   system.nodeName       = Mac-mini.local
[0]   system.currentDir     = /Users/Setsu/Desktop/Poco_Web/SystemConfiguration/
[0]   system.homeDir        = /Users/Setsu/
[0]   system.tempDir        = /var/folders/iR/iRcZrcWkGCe6fDFVNkPVjE+++TI/-Tmp-/
[0]   system.dateTime       = 2010-05-11T20:33:50Z
[0]   system.pid            = 4944
[0]   system.env.HOME       = /Users/Setsu
[0] SystemConfigurationTest end

// On Windows XP sp3
[0] SystemConfigurationTest start
[0]   system.osName         = Windows NT
[0]   system.osVersion      = 5.1 (Build 2600: Service Pack 3)
[0]   system.osArchitecture = IA32
[0]   system.nodeName       = SETSU-SHY3M0TG8
[0]   system.currentDir     = c:\Documents and Settings\setsu\デスクトップ\Poco_Web\SystemConfiguration\
[0]   system.homeDir        = C:\Documents and Settings\setsu\
[0]   system.tempDir        = C:\DOCUME~1\setsu\LOCALS~1\Temp\
[0]   system.dateTime       = 2010-05-12T09:16:42Z
[0]   system.pid            = 900
[0]   system.env.HOMEPATH   = \Documents and Settings\setsu
[0] SystemConfigurationTest end

// On Windows Vista sp2
[0] SystemConfigurationTest start
[0]   system.osName         = Windows NT
[0]   system.osVersion      = 6.0 (Build 6002: Service Pack 2)
[0]   system.osArchitecture = IA32
[0]   system.nodeName       = LH-BSRSP6OHS7R8
[0]   system.currentDir     = C:\Users\Setsu\Desktop\Poco_Web\SystemConfiguration\
[0]   system.homeDir        = C:\Users\Setsu\
[0]   system.tempDir        = C:\Users\Setsu\AppData\Local\Temp\
[0]   system.dateTime       = 2010-05-12T10:41:04Z
[0]   system.pid            = 2396
[0]   system.env.HOMEPATH   = \Users\Setsu
[0] SystemConfigurationTest end
