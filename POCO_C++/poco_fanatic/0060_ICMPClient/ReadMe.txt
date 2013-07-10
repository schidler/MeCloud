//
//  ICMPClientTest ReadMe.txt
//
//  Created by Setsu on Mar 20, 2011.
//  Copyright 2011 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is ICMPClientTest?
//----------------------------------------
Sample code which uses Poco::Net::ICMPClient.
   http://pocoproject.org/docs/Poco.Net.ICMPClient.html

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
Open ICMPClientTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for ICMPClientTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
// On Linux
$ sudo ./ICMPClientTest
[0] ICMPClientTest start
[0] *** static methods ***
[0]  Poco::Net::ICMPClient::ping() - OK
[0]  Poco::Net::ICMPClient::pingIPv4() - OK
[0] *** non-static methods ***
[0]  Poco::Net::ICMPClient::ping(const std::string& address, int repeat) - OK
[0]  ICMPClientTest::ping() start
[0]   Pinging poco.roundsquare.net [210.198.10.133] with 48 bytes of data:
[0]    Reply from poco.roundsquare.net bytes=48 time=31ms TTL=128
[0]    Reply from poco.roundsquare.net bytes=48 time=31ms TTL=128
[0]    Reply from poco.roundsquare.net bytes=48 time=32ms TTL=128
[0]    Reply from poco.roundsquare.net bytes=48 time=31ms TTL=128
[0]    Reply from poco.roundsquare.net bytes=48 time=31ms TTL=128
[0]   Ping statistics for poco.roundsquare.net
[0]    Packets: Sent=5, Received=5, Lost=0 (0.000% loss)
[0]    Approximate round trip times: Minimum=31ms, Maximum=32ms, Average=31ms
[0]  ICMPClientTest::ping() - OK
[0] ICMPClientTest end

// On Macintosh OSX 10.6.6
$ sudo ./ICMPClientTest
[0] ICMPClientTest start
[0] *** static methods ***
[0]  Poco::Net::ICMPClient::ping() - OK
[0]  Poco::Net::ICMPClient::pingIPv4() - OK
[0] *** non-static methods ***
[0]  Poco::Net::ICMPClient::ping(const std::string& address, int repeat) - OK
[0]  ICMPClientTest::ping() start
[0]   Pinging mail.roundsquare.net [210.198.10.133] with 48 bytes of data:
[0]    Reply from mail.roundsquare.net bytes=48 time=31ms TTL=128
[0]    Reply from mail.roundsquare.net bytes=48 time=31ms TTL=128
[0]    Reply from mail.roundsquare.net bytes=48 time=31ms TTL=128
[0]    Reply from mail.roundsquare.net bytes=48 time=30ms TTL=128
[0]    Reply from mail.roundsquare.net bytes=48 time=31ms TTL=128
[0]   Ping statistics for mail.roundsquare.net
[0]    Packets: Sent=5, Received=5, Lost=0 (0.000% loss)
[0]    Approximate round trip times: Minimum=30ms, Maximum=31ms, Average=30ms
[0]  ICMPClientTest::ping() - OK
[0] ICMPClientTest end

// On Windows XP sp3
[0] ICMPClientTest start
[0] *** static methods ***
[0]  Poco::Net::ICMPClient::ping() - OK
[0]  Poco::Net::ICMPClient::pingIPv4() - OK
[0] *** non-static methods ***
[0]  Poco::Net::ICMPClient::ping(const std::string& address, int repeat) - OK
[0]  ICMPClientTest::ping() start
[0]   Pinging poco.roundsquare.net [210.198.10.133] with 48 bytes of data:
[0]    Reply from poco.roundsquare.net bytes=48 time=31ms TTL=128
[0]    Reply from poco.roundsquare.net bytes=48 time=31ms TTL=128
[0]    Reply from poco.roundsquare.net bytes=48 time=46ms TTL=128
[0]    Reply from poco.roundsquare.net bytes=48 time=31ms TTL=128
[0]    Reply from poco.roundsquare.net bytes=48 time=31ms TTL=128
[0]   Ping statistics for poco.roundsquare.net
[0]    Packets: Sent=5, Received=5, Lost=0 (0.000% loss)
[0]    Approximate round trip times: Minimum=31ms, Maximum=46ms, Average=34ms
[0]  ICMPClientTest::ping() - OK
[0] ICMPClientTest end
