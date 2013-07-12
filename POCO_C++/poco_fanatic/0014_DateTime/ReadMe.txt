//
//  DateTime ReadMe.txt
//
//  Created by Setsu on 5/14/2010.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is DateTime?
//----------------------------------------
Sample code which uses Poco::DateTime.
   http://pocoproject.org/docs/Poco.DateTime.html

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
Open DateTimeTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for DateTimeTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
// On Linux
[0] DateTimeTest start
[0]   Current DateTime (UTC)
[0]             year = 2010
[0]            month = 5	(1 to 12)
[0]              day = 14	(1 to 31)
[0]             hour = 20	(0 to 23)
[0]           minute = 3	(0 to 59)
[0]           second = 51	(0 to 59)
[0]      millisecond = 834	(0 to 999)
[0]      microsecond = 438	(0 to 999)
[0]             isAM = false	(true or false)
[0]             isPM = true	(true or false)
[0]       isLeapYear = false	(true or false)
[0]         hourAMPM = 8	(0 to 12)
[0]        dayOfWeek = 5	(0 to 6,   0: Sunday)
[0]        dayOfYear = 134	(1 to 366, 1: January 1)
[0]      daysOfMonth = 31	(1 to 366, 1: January 1)
[0]             week = 19	(0 to 53,  1: the week containing January 4)
[0] 
[0]   Current DateTime (Locat Time: JST [GMT+9])
[0]             year = 2010
[0]            month = 5	(1 to 12)
[0]              day = 15	(1 to 31)
[0]             hour = 5	(0 to 23)
[0]           minute = 3	(0 to 59)
[0]           second = 51	(0 to 59)
[0]      millisecond = 834	(0 to 999)
[0]      microsecond = 438	(0 to 999)
[0]             isAM = true	(true or false)
[0]             isPM = false	(true or false)
[0]       isLeapYear = false	(true or false)
[0]         hourAMPM = 5	(0 to 12)
[0]        dayOfWeek = 6	(0 to 6,   0: Sunday)
[0]        dayOfYear = 135	(1 to 366, 1: January 1)
[0]      daysOfMonth = 31	(1 to 366, 1: January 1)
[0]             week = 19	(0 to 53,  1: the week containing January 4)
[0] 
[0]   DateTimeFormatter: Sat May 15 05:03:51 JST 2010
[0] DateTimeTest end

// On Macintosh OSX 10.6.3
[0] DateTimeTest start
[0]   Current DateTime (UTC)
[0]             year = 2010
[0]            month = 5	(1 to 12)
[0]              day = 14	(1 to 31)
[0]             hour = 19	(0 to 23)
[0]           minute = 24	(0 to 59)
[0]           second = 40	(0 to 59)
[0]      millisecond = 231	(0 to 999)
[0]      microsecond = 910	(0 to 999)
[0]             isAM = false	(true or false)
[0]             isPM = true	(true or false)
[0]       isLeapYear = false	(true or false)
[0]         hourAMPM = 7	(0 to 12)
[0]        dayOfWeek = 5	(0 to 6,   0: Sunday)
[0]        dayOfYear = 134	(1 to 366, 1: January 1)
[0]      daysOfMonth = 31	(1 to 366, 1: January 1)
[0]             week = 19	(0 to 53,  1: the week containing January 4)
[0] 
[0]   Current DateTime (Locat Time: JST [GMT+9])
[0]             year = 2010
[0]            month = 5	(1 to 12)
[0]              day = 15	(1 to 31)
[0]             hour = 4	(0 to 23)
[0]           minute = 24	(0 to 59)
[0]           second = 40	(0 to 59)
[0]      millisecond = 231	(0 to 999)
[0]      microsecond = 910	(0 to 999)
[0]             isAM = true	(true or false)
[0]             isPM = false	(true or false)
[0]       isLeapYear = false	(true or false)
[0]         hourAMPM = 4	(0 to 12)
[0]        dayOfWeek = 6	(0 to 6,   0: Sunday)
[0]        dayOfYear = 135	(1 to 366, 1: January 1)
[0]      daysOfMonth = 31	(1 to 366, 1: January 1)
[0]             week = 19	(0 to 53,  1: the week containing January 4)
[0] 
[0]   DateTimeFormatter: Sat May 15 04:24:40 JST 2010
[0] DateTimeTest end

// On Windows XP sp3
[0] DateTimeTest start
[0]   Current DateTime (UTC)
[0]             year = 2010
[0]            month = 5	(1 to 12)
[0]              day = 14	(1 to 31)
[0]             hour = 19	(0 to 23)
[0]           minute = 43	(0 to 59)
[0]           second = 23	(0 to 59)
[0]      millisecond = 127	(0 to 999)
[0]      microsecond = 500	(0 to 999)
[0]             isAM = false	(true or false)
[0]             isPM = true	(true or false)
[0]       isLeapYear = false	(true or false)
[0]         hourAMPM = 7	(0 to 12)
[0]        dayOfWeek = 5	(0 to 6,   0: Sunday)
[0]        dayOfYear = 134	(1 to 366, 1: January 1)
[0]      daysOfMonth = 31	(1 to 366, 1: January 1)
[0]             week = 19	(0 to 53,  1: the week containing January 4)
[0] 
[0]   Current DateTime (Locat Time: ìåãû (ïWèÄéû) [GMT+9])
[0]             year = 2010
[0]            month = 5	(1 to 12)
[0]              day = 15	(1 to 31)
[0]             hour = 4	(0 to 23)
[0]           minute = 43	(0 to 59)
[0]           second = 23	(0 to 59)
[0]      millisecond = 127	(0 to 999)
[0]      microsecond = 500	(0 to 999)
[0]             isAM = true	(true or false)
[0]             isPM = false	(true or false)
[0]       isLeapYear = false	(true or false)
[0]         hourAMPM = 4	(0 to 12)
[0]        dayOfWeek = 6	(0 to 6,   0: Sunday)
[0]        dayOfYear = 135	(1 to 366, 1: January 1)
[0]      daysOfMonth = 31	(1 to 366, 1: January 1)
[0]             week = 19	(0 to 53,  1: the week containing January 4)
[0] 
[0]   DateTimeFormatter: Sat May 15 04:43:23 ìåãû (ïWèÄéû) 2010
[0] DateTimeTest end
