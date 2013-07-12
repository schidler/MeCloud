//
//  DynamicAny ReadMe.txt
//
//  Created by Setsu on 6/16/10.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is DynamicAny?
//----------------------------------------
Message logging class which uses Poco::DynamicAny.
   http://pocoproject.org/docs/Poco.DynamicAny.html

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
Open DynamicAnyTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for DynamicAnyTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
[0] DynamicAnyTest start
[0]          char  65*    64     63     62     61     60     59     58     57     56     55     53      1    
[0]    Poco::Int8  65     64*    63     62     61     60     59     58     57     56     55     54      1    
[0]   Poco::UInt8  65     64     63*    62     61     60     59     58     57     56     55     54      1    
[0]   Poco::Int16  65     64     63     62*    61     60     59     58     57     56     55     54      1    
[0]  Poco::UInt16  65     64     63     62     61*    60     59     58     57     56     55     54      1    
[0]   Poco::Int32  65     64     63     62     61     60*    59     58     57     56     55     54      1    
[0]  Poco::UInt32  65     64     63     62     61     60     59*    58     57     56     55     54      1    
[0]   Poco::Int64  65     64     63     62     61     60     59     58*    57     56     55     54      1    
[0]  Poco::UInt64  65     64     63     62     61     60     59     58     57*    56     55     54      1    
[0]         float  65.00  64.00  63.00  62.00  61.00  60.00  59.00  58.00  57.00  56.00* 55.00  54.00   1.00 
[0]        double  65.00  64.00  63.00  62.00  61.00  60.00  59.00  58.00  57.00  56.00  55.00* 54.00   1.00 
[0]   std::string  "A"   "64"   "63"   "62"   "61"   "60"   "59"   "58"   "57"   "56"   "55"   "54"*  "true"   
[0]          bool   1      1      1      1      1      1      1      1      1      1      1      1      1*   
[0]                 (NOTE: item with trailing '*' indicates it's the source)
[0] DynamicAnyTest end
