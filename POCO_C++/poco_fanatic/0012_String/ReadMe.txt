//
//  String ReadMe.txt
//
//  Created by Setsu on 5/10/10.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is String?
//----------------------------------------
Sample code which uses Poco/String.h.

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
Open StringTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for StringTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
[0] StringTest start

[0] TestTrimLeft start
[0]     source  string: " a b c "
[0]   trimLeft(" a b c "):
[0]     changed string: "a b c "
[0]     source  string: " a b c "
[0]   trimLeftInPlace(" a b c "):
[0]     changed string: "a b c "
[0]     source  string: "a b c "
[0] TestTrimLeft end

[0] TestTrimRight start
[0]     source  string: " a b c "
[0]   trimRight(" a b c "):
[0]     changed string: " a b c"
[0]     source  string: " a b c "
[0]   trimRightInPlace(" a b c "):
[0]     changed string: " a b c"
[0]     source  string: " a b c"
[0] TestTrimRight end

[0] TestTrim start
[0]     source  string: " a b c "
[0]   trim(" a b c "):
[0]     changed string: "a b c"
[0]     source  string: " a b c "
[0]   trimInPlace(" a b c "):
[0]     changed string: "a b c"
[0]     source  string: "a b c"
[0] TestTrim end

[0] TestToUpper start
[0]     source  string: " a b c "
[0]   toUpper(" a b c "):
[0]     changed string: " A B C "
[0]     source  string: " a b c "
[0]   toUpperInPlace(" a b c "):
[0]     changed string: " A B C "
[0]     source  string: " A B C "
[0] TestToUpper end

[0] TestToLower start
[0]     source  string: " a b c "
[0]   toLower(" a b c "):
[0]     changed string: " a b c "
[0]     source  string: " a b c "
[0]   toLowerInPlace(" a b c "):
[0]     changed string: " a b c "
[0]     source  string: " a b c "
[0] TestToLower end

[0] TestICompare start
[0]     source  string 1: " A B C "
[0]     source  string 2: " a b c "
[0]   iCompare(" A B C ", " a b c "):
[0]     result: "true"
[0] TestICompare end

[0] TestTranslate start
[0]     source  string: " a b c "
[0]   translate(" a b c ", "abc", "ABC"):
[0]     changed string: " A B C "
[0]     source  string: " a b c "
[0]   translateInPlace(" a b c ", "abc", "ABC"):
[0]     changed string: " A B C "
[0]     source  string: " A B C "
[0] TestTranslate end

[0] TestReplace start
[0]     source  string: "The quick brown fox jumps over the lazy dog."
[0]   replace("The quick brown fox jumps over the lazy dog.", "dog", "cat"):
[0]     changed string: "The quick brown fox jumps over the lazy cat."
[0]     source  string: "The quick brown fox jumps over the lazy dog."
[0]   replaceInPlace("The quick brown fox jumps over the lazy dog.", "dog", "cat"):
[0]     changed string: "The quick brown fox jumps over the lazy cat."
[0]     source  string: "The quick brown fox jumps over the lazy cat."
[0] TestReplace end

[0] TestCat start
[0]   cat("Pack ", "my box ", "with ", "five dozen ", "liquor ", "jugs.")
[0]     combined string: "Pack my box with five dozen liquor jugs."
[0] TestCat end

[0] StringTest end
