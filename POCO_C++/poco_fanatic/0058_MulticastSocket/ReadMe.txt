//
//  MulticastSocket ReadMe.txt
//
//  Created by Setsu on Feb 26, 2011.
//  Copyright 2011 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is MulticastSocket?
//----------------------------------------
Message logging class which uses Poco::Net::MulticastSocket.
   http://pocoproject.org/docs/Poco.Net.MulticastSocket.html

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
Open MulticastSocketTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for MulticastSocketTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
// On Linux
$ ./MulticastSocketTest
[0] MulticastSocketTest start
[1]  launch "./MulticastSocketTestReceiver 239.255.1.2 12345 23456"
   - MulticastSocketReceiver starting up
  ReceiverTask start listening 239.255.1.2:12345
[2]  launch "./MulticastSocketTestSender 239.255.1.2 12345 23456"
   - MulticastSocketSender starting up
   SenderTask: 172.16.250.128:12345
   ReceiverTask: received 43 bytes (SenderTask?ipaddr=172.16.250.128&port=23456)
   ReceiverTask: received 43 bytes (SenderTask?ipaddr=172.16.250.128&port=23456)
   ReceiverTask: received 43 bytes (SenderTask?ipaddr=172.16.250.128&port=23456)
   ReceiverTask: received 43 bytes (SenderTask?ipaddr=172.16.250.128&port=23456)
   ReceiverTask: received 43 bytes (SenderTask?ipaddr=172.16.250.128&port=23456)
[0]  "./MulticastSocketTestSender" requestTermination
   - MulticastSocketSender shutting down
[0]  "./MulticastSocketTestSender" terminated with return code = 0
[0]  "./MulticastSocketTestReceiver" requestTermination
   - MulticastSocketReceiver shutting down
[0]  "./MulticastSocketTestReceiver" terminated with return code = 0
[0] MulticastSocketTest end

$ ./MulticastSocketTest ipv6
[0] MulticastSocketTest start
[1]  launch "./MulticastSocketTestReceiver FF02::1 12345 23456"
   - MulticastSocketReceiver starting up
  ReceiverTask start listening FF02::1:12345
[2]  launch "./MulticastSocketTestSender FF02::1 12345 23456"
   - MulticastSocketSender starting up
   SenderTask: FE80::20C:29FF:FEFF:E49A%eth0:12345
   ReceiverTask: received 58 bytes (SenderTask?ipaddr=FE80::20C:29FF:FEFF:E49A%eth0&port=23456)
   ReceiverTask: received 58 bytes (SenderTask?ipaddr=FE80::20C:29FF:FEFF:E49A%eth0&port=23456)
   ReceiverTask: received 58 bytes (SenderTask?ipaddr=FE80::20C:29FF:FEFF:E49A%eth0&port=23456)
   ReceiverTask: received 58 bytes (SenderTask?ipaddr=FE80::20C:29FF:FEFF:E49A%eth0&port=23456)
   ReceiverTask: received 58 bytes (SenderTask?ipaddr=FE80::20C:29FF:FEFF:E49A%eth0&port=23456)
[0]  "./MulticastSocketTestSender" requestTermination
   - MulticastSocketSender shutting down
[0]  "./MulticastSocketTestSender" terminated with return code = 0
[0]  "./MulticastSocketTestReceiver" requestTermination
   - MulticastSocketReceiver shutting down
[0]  "./MulticastSocketTestReceiver" terminated with return code = 0
[0] MulticastSocketTest end

// On Macintosh OSX 10.6.6
$ ./MulticastSocketTest
[0] MulticastSocketTest start
[1]  launch "./MulticastSocketTestReceiver 239.255.1.2 12345 23456"
   - MulticastSocketReceiver starting up
  ReceiverTask start listening 239.255.1.2:12345
[2]  launch "./MulticastSocketTestSender 239.255.1.2 12345 23456"
   - MulticastSocketSender starting up
   SenderTask: 192.168.1.135:12345
   ReceiverTask: received 42 bytes (SenderTask?ipaddr=192.168.1.135&port=23456)
   ReceiverTask: received 42 bytes (SenderTask?ipaddr=192.168.1.135&port=23456)
   ReceiverTask: received 42 bytes (SenderTask?ipaddr=192.168.1.135&port=23456)
   ReceiverTask: received 42 bytes (SenderTask?ipaddr=192.168.1.135&port=23456)
   ReceiverTask: received 42 bytes (SenderTask?ipaddr=192.168.1.135&port=23456)
[0]  "./MulticastSocketTestSender" requestTermination
   - MulticastSocketSender shutting down
[0]  "./MulticastSocketTestSender" terminated with return code = 0
[0]  "./MulticastSocketTestReceiver" requestTermination
   - MulticastSocketReceiver shutting down
[0]  "./MulticastSocketTestReceiver" terminated with return code = 0
[0] MulticastSocketTest end

$ ./MulticastSocketTest ipv6
[0] MulticastSocketTest start
[1]  launch "./MulticastSocketTestReceiver FF02::1 12345 23456"
   - MulticastSocketReceiver starting up
  ReceiverTask start listening FF02::1:12345
[2]  launch "./MulticastSocketTestSender FF02::1 12345 23456"
   - MulticastSocketSender starting up
   SenderTask: FE80::216:CBFF:FEB0:AAE4%en0:12345
   ReceiverTask: received 57 bytes (SenderTask?ipaddr=FE80::216:CBFF:FEB0:AAE4%en0&port=23456)
   ReceiverTask: received 57 bytes (SenderTask?ipaddr=FE80::216:CBFF:FEB0:AAE4%en0&port=23456)
   ReceiverTask: received 57 bytes (SenderTask?ipaddr=FE80::216:CBFF:FEB0:AAE4%en0&port=23456)
   ReceiverTask: received 57 bytes (SenderTask?ipaddr=FE80::216:CBFF:FEB0:AAE4%en0&port=23456)
   ReceiverTask: received 57 bytes (SenderTask?ipaddr=FE80::216:CBFF:FEB0:AAE4%en0&port=23456)
[0]  "./MulticastSocketTestSender" requestTermination
   - MulticastSocketSender shutting down
[0]  "./MulticastSocketTestSender" terminated with return code = 0
[0]  "./MulticastSocketTestReceiver" requestTermination
   - MulticastSocketReceiver shutting down
[0]  "./MulticastSocketTestReceiver" terminated with return code = 0
[0] MulticastSocketTest end

// On Windows XP sp3
MulticastSocketTest.exe
[0] MulticastSocketTest start
[1]  launch "MulticastSocketTestReceiver.exe 239.255.1.2 12345 23456"
   - MulticastSocketReceiver starting up
[2]  launch "MulticastSocketTestSender.exe 239.255.1.2 12345 23456"
   - MulticastSocketSender starting up
  ReceiverTask start listening 239.255.1.2:12345
   SenderTask: 172.16.250.130:12345
   ReceiverTask: received 43 bytes (SenderTask?ipaddr=172.16.250.130&port=23456)
   ReceiverTask: received 43 bytes (SenderTask?ipaddr=172.16.250.130&port=23456)
   ReceiverTask: received 43 bytes (SenderTask?ipaddr=172.16.250.130&port=23456)
   ReceiverTask: received 43 bytes (SenderTask?ipaddr=172.16.250.130&port=23456)
[0]  "MulticastSocketTestSender.exe" requestTermination
   - MulticastSocketSender shutting down
[0]  "MulticastSocketTestSender.exe" terminated with return code = 0
[0]  "MulticastSocketTestReceiver.exe" requestTermination
   - MulticastSocketReceiver shutting down
[0]  "MulticastSocketTestReceiver.exe" terminated with return code = 0
[0] MulticastSocketTest end
