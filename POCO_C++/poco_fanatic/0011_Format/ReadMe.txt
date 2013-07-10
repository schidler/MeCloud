//
//  Format ReadMe.txt
//
//  Created by Setsu on 5/8/10.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is Format?
//----------------------------------------
Sample code which uses Poco::format.
   http://pocoproject.org/docs/Poco.html#7066

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
Open FormatTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for FormatTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
[0] FormatTest start

[0] TestBoolean start
[0]   true=1, false=0               [fmt="true=%b, false=%b"]
[0]   true=1 , false= 0             [fmt="true=%-2b, false=%2b"]
[0]   [fmt="true=%b"] does not accept int
[0] TestBoolean end

[0] TestCharacter start
[0]   char=a                        [fmt="char=%c"]
[0]   char=a , char= a              [fmt="char=%-2c, char=%2c"]
[0]   [fmt="char=%c"] does not accept std::string
[0] TestCharacter end

[0] TestSignedInteger start
[0]   int=12                        [fmt="int=%d"]
[0]   int=12 , int= 12              [fmt="int=%-3d, int=%3d"]
[0]   int= +12, int= -12            [fmt="int=%+4d, int=%+4d"]
[0]   [fmt="int=%d"] does not accept short
[0] TestSignedInteger end

[0] TestUnsignedInteger start
[0]   unsigned=12                   [fmt="unsigned=%u"]
[0]   unsigned=12 , unsigned= 12    [fmt="unsigned=%-3u, unsigned=%3u"]
[0]   [fmt="unsigned=%u"] does not accept int
[0] TestUnsignedInteger end

[0] TestSignedShortInteger start
[0]   short=12                      [fmt="short=%hd"]
[0]   short=12 , short= 12          [fmt="short=%-3hd, short=%3hd"]
[0]   short= +12, short= -12        [fmt="short=%+4hd, short=%+4hd"]
[0]   [fmt="short=%hd"] does not accept int
[0] TestSignedShortInteger end

[0] TestUnsignedShortInteger start
[0]   ushort=12                     [fmt="ushort=%hu"]
[0]   ushort=12 , ushort= 12        [fmt="ushort=%-3hu, ushort=%3hu"]
[0]   [fmt="ushort=%hu"] does not accept int
[0] TestUnsignedShortInteger end

[0] TestSignedLongInteger start
[0]   long=12                       [fmt="long=%ld"]
[0]   long=12 , long= 12            [fmt="long=%-3ld, long=%3ld"]
[0]   long= +12, long= -12          [fmt="long=%+4ld, long=%+4ld"]
[0]   [fmt="long=%ld"] does not accept int
[0] TestSignedLongInteger end

[0] TestUnsignedLongInteger start
[0]   ulong=12                      [fmt="ulong=%lu"]
[0]   ulong=12 , ulong= 12          [fmt="ulong=%-3lu, ulong=%3lu"]
[0]   [fmt="ulong=%lu"] does not accept unsigned
[0] TestUnsignedLongInteger end

[0] TestSignedLongLongInteger start
[0]   Int64=12                      [fmt="Int64=%Ld"]
[0]   Int64=12 , Int64= 12          [fmt="Int64=%-3Ld, Int64=%3Ld"]
[0]   Int64= +12, Int64= -12        [fmt="Int64=%+4Ld, Int64=%+4Ld"]
[0]   [fmt="Int64=%Ld"] does not accept int
[0] TestSignedLongLongInteger end

[0] TestUnsignedLongLongInteger start
[0]   UInt64=12                     [fmt="UInt64=%Lu"]
[0]   UInt64=12 , UInt64= 12        [fmt="UInt64=%-3Lu, UInt64=%3Lu"]
[0]   [fmt="UInt64=%Lu"] does not accept unsigned
[0] TestUnsignedLongLongInteger end

[0] TestUnsignedOctalInteger start
[0]   octal=12                      [fmt="octal=%o"]
[0]   octal=012                     [fmt="octal=%#o"]
[0]   octal=  12, octal=0012        [fmt="octal=%4o, octal=%04o"]
[0]   [fmt="octal=%o"] does not accept int
[0] TestUnsignedOctalInteger end

[0] TestUnsignedHexInteger start
[0]   hex=1a                        [fmt="hex=%x"]
[0]   hex=1A                        [fmt="hex=%X"]
[0]   hex=0x1a                      [fmt="hex=%#x"]
[0]   hex=0X1A                      [fmt="hex=%#X"]
[0]   hex=  1a, hex=001a            [fmt="hex=%4x, hex=%04x"]
[0]   hex=  1A, hex=001A            [fmt="hex=%4X, hex=%04X"]
[0]   [fmt="hex=%x"] does not accept short
[0] TestUnsignedHexInteger end

[0] TestDouble start
[0]   double=1.200000               [fmt="double=%f"]
[0]   double=1.20 , double= 1.20    [fmt="double=%-5.2f, double=%5.2f"]
[0]   double=1.200000e+00           [fmt="double=%e"]
[0]   double=1.20e+00 , double= 1.20e+00 [fmt="double=%-9.2e, double=%9.2e"]
[0]   [fmt="double=%f"] does not accept float
[0] TestDouble end

[0] TestFloat start
[0]   float=1.200000                [fmt="float=%hf"]
[0]   float=1.20 , float= 1.20      [fmt="float=%-5.2hf, float=%5.2hf"]
[0]   float=1.200000e+00            [fmt="float=%he"]
[0]   float=1.20e+00 , float= 1.20e+00 [fmt="float=%-9.2he, float=%9.2he"]
[0]   [fmt="float=%hf"] does not accept double
[0] TestFloat end

[0] TestString start
[0]   string=bar                    [fmt="string=%s"]
[0]   string=bar , string= bar      [fmt="string=%-4s, string=%4s"]
[0]   [fmt="string=%s"] does not accept const char*
[0] TestString end

[0] TestSize_t start
[0]   size_t=12                     [fmt="size_t=%z"]
[0]   size_t=12 , size_t= 12        [fmt="size_t=%-3z, size_t=%3z"]
[0]   [fmt="size_t=%z"] does not accept int
[0] TestSize_t end

[0] TestAnyInteger start
[0]   bool=1                        [fmt="bool=%?i"]
[0]   char=42                       [fmt="char=%?i"]
[0]   signed char=-42               [fmt="signed char=%?i"]
[0]   unsigned char=65              [fmt="unsigned char=%?i"]
[0]   short=-134                    [fmt="short=%?i"]
[0]   unsigned short=200            [fmt="unsigned short=%?i"]
[0]   int=-12345                    [fmt="int=%?i"]
[0]   unsigned=12345                [fmt="unsigned=%?i"]
[0]   long=-54321                   [fmt="long=%?i"]
[0]   unsigned long=54321           [fmt="unsigned long=%?i"]
[0]   Poco::Int64=-12345678         [fmt="Poco::Int64=%?i"]
[0]   Poco::UInt64=12345678         [fmt="Poco::UInt64=%?i"]
[0]   octal=012                     [fmt="octal=%#?o"]
[0]   hex=0x7f                      [fmt="hex=%#?x"]
[0] TestAnyInteger end

[0] FormatTest end
