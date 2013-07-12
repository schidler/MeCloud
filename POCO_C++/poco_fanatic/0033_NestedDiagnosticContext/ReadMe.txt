//
//  NestedDiagnosticContext ReadMe.txt
//
//  Created by Setsu on 6/15/10.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is NestedDiagnosticContext?
//----------------------------------------
Message logging class which uses Poco::NestedDiagnosticContext.
   http://pocoproject.org/docs/Poco.NestedDiagnosticContext.html

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
Open NestedDiagnosticContextTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for NestedDiagnosticContextTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
[0] NestedDiagnosticContextTest start
[1] 
- Poco::NDC::current().depth()    : 2
- Poco::NDC::current().toString() :
run:TestFunction
- Poco::NDC::current().dump()     :
run (in "NestedDiagnosticContextTest.cpp", line 103)
TestFunction (in "NestedDiagnosticContextTest.cpp", line 71)

[2] 
- Poco::NDC::current().depth()    : 3
- Poco::NDC::current().toString() :
run:TestFunction:TestFunction
- Poco::NDC::current().dump()     :
run (in "NestedDiagnosticContextTest.cpp", line 103)
TestFunction (in "NestedDiagnosticContextTest.cpp", line 71)
TestFunction (in "NestedDiagnosticContextTest.cpp", line 71)

[3] 
- Poco::NDC::current().depth()    : 4
- Poco::NDC::current().toString() :
run:TestFunction:TestFunction:TestFunction
- Poco::NDC::current().dump()     :
run (in "NestedDiagnosticContextTest.cpp", line 103)
TestFunction (in "NestedDiagnosticContextTest.cpp", line 71)
TestFunction (in "NestedDiagnosticContextTest.cpp", line 71)
TestFunction (in "NestedDiagnosticContextTest.cpp", line 71)

[0] 
- Poco::NDC::current().depth()    : 1
- Poco::NDC::current().toString() :
main
- Poco::NDC::current().dump()     :
main (in "NestedDiagnosticContextTest.cpp", line 137)

[0] NestedDiagnosticContextTest end
