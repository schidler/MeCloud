//
//  NetworkInterfaceTest ReadMe.txt
//
//  Created by Setsu on 2/17/2011.
//  Copyright 2011 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is NetworkInterfaceTest?
//----------------------------------------
Sample code which uses Poco::Net::NetworkInterface.
   http://pocoproject.org/docs/Poco.Net.NetworkInterface.html

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
Open NetworkInterfaceTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for NetworkInterfaceTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
// On Linux
[0] NetworkInterfaceTest start
[0] #1 lo (lo)
[0]      IPv6 127.0.0.1 (0.0.0.0)
[0]     [IPv4 isIPv4Compatible isIPv4Mapped isLoopback isUnicast]
[0] #2 eth0 (eth0)
[0]      IPv6 172.16.250.129 (0.0.0.0)
[0]     [IPv4 isIPv4Compatible isIPv4Mapped isSiteLocal isUnicast]
[0] #3 lo (lo)
[0]      IPv6 ::0.0.0.1 (0.0.0.0)
[0]     [IPv6 isIPv4Compatible isLoopback isUnicast]
[0] #4 eth0 (eth0)
[0]      IPv6 FE80::20C:29FF:FED0:48A0 (0.0.0.0)
[0]     [IPv6 isLinkLocal isUnicast]
[0] NetworkInterfaceTest end

// On Macintosh OSX 10.6.6
[0] NetworkInterfaceTest start
[0] #1 lo0 (lo0)
[0]      IPv6 ::0.0.0.1 (0.0.0.0)
[0]     [IPv6 isIPv4Compatible isLoopback isUnicast]
[0] #2 lo0 (lo0)
[0]      IPv6 FE80::1 (0.0.0.0)
[0]     [IPv6 isLinkLocal isUnicast]
[0] #3 lo0 (lo0)
[0]      IPv4 127.0.0.1 (0.0.0.0)
[0]     [IPv4 isIPv4Compatible isIPv4Mapped isLoopback isUnicast]
[0] #4 lo0 (lo0)
[0]      IPv6 FD13:333A:B679:997F:216:CBFF:FEB0:AAE4 (0.0.0.0)
[0]     [IPv6 isUnicast]
[0] #5 en0 (en0)
[0]      IPv6 FE80::216:CBFF:FEB0:AAE4 (0.0.0.0)
[0]     [IPv6 isLinkLocal isUnicast]
[0] #6 en0 (en0)
[0]      IPv4 192.168.1.135 (192.168.1.255)
[0]     [IPv4 isIPv4Compatible isIPv4Mapped isSiteLocal isUnicast]
[0] #7 vmnet8 (vmnet8)
[0]      IPv4 172.16.250.1 (172.16.250.255)
[0]     [IPv4 isIPv4Compatible isIPv4Mapped isSiteLocal isUnicast]
[0] #8 vmnet1 (vmnet1)
[0]      IPv4 172.16.101.1 (172.16.101.255)
[0]     [IPv4 isIPv4Compatible isIPv4Mapped isSiteLocal isUnicast]
[0] #9 utun0 (utun0)
[0]      IPv6 FE80::216:CBFF:FEB0:AAE4 (0.0.0.0)
[0]     [IPv6 isLinkLocal isUnicast]
[0] #10 utun0 (utun0)
[0]      IPv6 FD00:6587:52D7:C2:216:CBFF:FEB0:AAE4 (0.0.0.0)
[0]     [IPv6 isUnicast]
[0] NetworkInterfaceTest end

// On Windows XP sp3
[0] NetworkInterfaceTest start
[0] #1 {14EF5D01-4C01-4C0B-8A79-0D4C7FDB7370} (AMD PCNET Family PCI Ethernet Adapter - パケット スケジューラ ミニポート)
[0]      IPv6 172.16.250.130 (0.0.0.0)
[0]     [IPv4 isIPv4Compatible isIPv4Mapped isSiteLocal isUnicast]
[0] #2 MS TCP Loopback interface (MS TCP Loopback interface)
[0]      IPv6 127.0.0.1 (0.0.0.0)
[0]     [IPv4 isIPv4Compatible isIPv4Mapped isLoopback isUnicast]
[0] NetworkInterfaceTest end
