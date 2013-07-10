//
//  DNSTest ReadMe.txt
//
//  Created by Setsu on Mar 13, 2011.
//  Copyright 2011 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is DNSTest?
//----------------------------------------
Sample code which uses Poco::Net::DNS.
   http://pocoproject.org/docs/Poco.Net.DNS.html

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
Open DNSTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for DNSTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
// On Linux
[0] DNSTest start
[0] Poco::Net::DNS::hostName()
[0]   debian
[0] Poco::Net::DNS::hostByName("www.google.com")
[0]        name: www.l.google.com
[0]   address#0: 66.249.89.104
[0]   address#1: 66.249.89.99
[0]     alias#0: www.google.com
[0] Poco::Net::DNS::hostByAddress(Poco::Net::IPAddress("66.249.89.104"))
[0]        name: www.l.google.com
[0]   address#0: 66.249.89.104
[0]   address#1: 66.249.89.99
[0]     alias#0: www.google.com
[0] Poco::Net::DNS::resolve("www.google.com")
[0]        name: www.l.google.com
[0]   address#0: 66.249.89.104
[0]   address#1: 66.249.89.99
[0]     alias#0: www.google.com
[0] Poco::Net::DNS::resolve("66.249.89.104")
[0]        name: www.l.google.com
[0]   address#0: 66.249.89.104
[0]   address#1: 66.249.89.99
[0]     alias#0: www.google.com
[0] DNSTest end

// On Macintosh OSX 10.6.6
[0] DNSTest start
[0] Poco::Net::DNS::hostName()
[0]   Mac-mini.local
[0] Poco::Net::DNS::hostByName("www.google.com")
[0]        name: www.l.google.com
[0]   address#0: 66.249.89.99
[0]   address#1: 66.249.89.104
[0]     alias#0: www.google.com
[0] Poco::Net::DNS::hostByAddress(Poco::Net::IPAddress("66.249.89.104"))
[0]        name: nrt04s01-in-f104.1e100.net
[0]   address#0: 66.249.89.104
[0]     alias#0: 104.89.249.66.in-addr.arpa
[0] Poco::Net::DNS::resolve("www.google.com")
[0]        name: www.l.google.com
[0]   address#0: 66.249.89.99
[0]   address#1: 66.249.89.104
[0]     alias#0: www.google.com
[0] Poco::Net::DNS::resolve("66.249.89.104")
[0]        name: nrt04s01-in-f104.1e100.net
[0]   address#0: 66.249.89.104
[0]     alias#0: 104.89.249.66.in-addr.arpa
[0] DNSTest end

// On Windows XP sp3
[0] DNSTest start
[0] Poco::Net::DNS::hostName()
[0]   setsu-shy3m0tg8
[0] Poco::Net::DNS::hostByName("www.google.com")
[0]        name: www.google.com
[0]   address#0: 66.249.89.99
[0] Poco::Net::DNS::hostByAddress(Poco::Net::IPAddress("66.249.89.104"))
[0]        name: nrt04s01-in-f104.1e100.net
[0]   address#0: 66.249.89.104
[0] Poco::Net::DNS::resolve("www.google.com")
[0]        name: www.google.com
[0]   address#0: 66.249.89.99
[0] Poco::Net::DNS::resolve("66.249.89.104")
[0]        name: nrt04s01-in-f104.1e100.net
[0]   address#0: 66.249.89.104
[0] DNSTest end
