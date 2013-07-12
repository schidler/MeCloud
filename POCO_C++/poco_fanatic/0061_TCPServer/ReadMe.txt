//
//  TCPServer ReadMe.txt
//
//  Created by Setsu on May 3, 2013.
//  Copyright 2013 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is TCPServer?
//----------------------------------------
Sample code which uses Poco:: TCPServer.
   http://pocoproject.org/docs/Poco.Net.TCPServer.html

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
Open TCPServerTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for TCPServerTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
$ ./TCPServerTest
[0]  main() start
[0]  CommandDispatcher start
[0]   TCPConnectionFactory start
[2]   TCPConnectionFactory createConnection
[2]    TCPConnection start (192.168.1.132:52195)
[2]     TCPConnection::run received: set 10 20
[1]      SetProcessor::Process called.
[2]     TCPConnection::run received: move 1 2
[1]      MoveProcessor::Process called.
[3]   TCPConnectionFactory createConnection
[3]    TCPConnection start (127.0.0.1:52196)
[3]     TCPConnection::run received: get
[1]      GetProcessor::Process called.
[3]     TCPConnection::run received: move -2 -3
[1]      MoveProcessor::Process called.
[2]     TCPConnection::run received: get
[1]      GetProcessor::Process called.
[2]    TCPConnection end   (192.168.1.132:52195)
[3]    TCPConnection end   (127.0.0.1:52196)
^C
[3]   TCPConnectionFactory end
[0]  CommandDispatcher end
[0]  main() end

Terminal #1
$ telnet 192.168.1.132 9923
Trying 192.168.1.132...
Connected to 192.168.1.132.
Escape character is '^]'.
TCPServer> set 10 20
cursorPos={10, 20}
TCPServer> move 1 2
cursorPos={11, 22}
TCPServer> get
cursorPos={9, 19}
TCPServer> ^]
telnet> q
Connection closed.

Terminal #2
$ telnet localhost 9923
Trying 127.0.0.1...
Connected to localhost.
Escape character is '^]'.
TCPServer> get
cursorPos={11, 22}
TCPServer> move -2 -3
cursorPos={9, 19}
TCPServer> ^]
telnet> q
Connection closed.
