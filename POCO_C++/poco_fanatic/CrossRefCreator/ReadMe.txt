//
//  CrossRefCreator ReadMe.txt
//
//  Created by Setsu on 6/6/2010.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is CrossRefCreator?
//----------------------------------------
CrossRefCreator generates cross reference HTML file from poco-fanatic sample source codes.
Note that file/directory construction on subversion is kept unchanged.

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
//----------------------------------------
Open CrossRefCreator.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for CrossRefCreator
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
[0] CrossRefCreator start
NETWORK_BYTE_ORDER
  <a name="3872">NETWORK_BYTE_ORDER</a>
daysOfMonth
  <a name="4441">daysOfMonth</a>
isLeapYear
  <a name="4439">isLeapYear</a>
SORTABLE_FORMAT
  <a name="4494">SORTABLE_FORMAT</a>
format
  <a name="4500">format</a>
STREAM_GZIP
  <a name="4622">STREAM_GZIP</a>
STREAM_ZLIB
  <a name="4621">STREAM_ZLIB</a>
digestToHex
  <a name="4732">digestToHex</a>
GLOB_DOT_SPECIAL
  <a name="7210">GLOB_DOT_SPECIAL</a>
glob
  <a name="7220">glob</a>
STREAM_GZIP
  <a name="7570">STREAM_GZIP</a>
STREAM_ZLIB
  <a name="7569">STREAM_ZLIB</a>
Int32
  <a name="11353">Int32</a>
Int64
  <a name="11357">Int64</a>
ROOT
  <a name="8145">ROOT</a>
create
  <a name="8133">create</a>
get
  <a name="8129">get</a>
PRIO_INFORMATION
  <a name="8430">PRIO_INFORMATION</a>
getAnonymousPassword
  <a name="12382">getAnonymousPassword</a>
getPasswordProvider
  <a name="12385">getPasswordProvider</a>
registerFactory
  <a name="12386">registerFactory</a>
HTTP_1_1
  <a name="12791">HTTP_1_1</a>
HTTP_GET
  <a name="12851">HTTP_GET</a>
HTTP_PORT
  <a name="13172">HTTP_PORT</a>
registerFactory
  <a name="13312">registerFactory</a>
ConstIterator
  <a name="14053">ConstIterator</a>
Ptr
  <a name="8786">Ptr</a>
parse
  <a name="9089">parse</a>
PATH_UNIX
  <a name="9160">PATH_UNIX</a>
current
  <a name="9276">current</a>
expand
  <a name="9280">expand</a>
home
  <a name="9277">home</a>
listRoots
  <a name="9282">listRoots</a>
null
  <a name="9279">null</a>
pathSeparator
  <a name="9275">pathSeparator</a>
separator
  <a name="9274">separator</a>
temp
  <a name="9278">temp</a>
Match
  not found in http://pocoproject.org/docs/Poco.RegularExpression.html
copyStream
  <a name="10298">copyStream</a>
copyToString
  <a name="10305">copyToString</a>
Iterator
  <a name="10467">Iterator</a>
current
  <a name="10856">current</a>
sleep
  <a name="10853">sleep</a>
defaultPool
  <a name="10939">defaultPool</a>
TimeDiff
  <a name="11151">TimeDiff</a>
TimeVal
  <a name="11149">TimeVal</a>
name
  <a name="11208">name</a>
tzd
  <a name="11207">tzd</a>
UInt16
  <a name="11352">UInt16</a>
UInt32
  <a name="11354">UInt32</a>
UInt64
  <a name="11358">UInt64</a>
defaultOpener
  <a name="11543">defaultOpener</a>
dns
  <a name="11712">dns</a>
nil
  <a name="11711">nil</a>
oid
  <a name="11714">oid</a>
uri
  <a name="11713">uri</a>
x500
  <a name="11715">x500</a>
defaultGenerator
  <a name="11761">defaultGenerator</a>
EXIT_OK
  <a name="16400">EXIT_OK</a>
defineOptions
  <a name="17210">defineOptions</a>
handleOption
  <a name="17212">handleOption</a>
initialize
  not found in http://pocoproject.org/docs/Poco.Util.ServerApplication.html
uninitialize
  not found in http://pocoproject.org/docs/Poco.Util.ServerApplication.html
Ptr
  <a name="17293">Ptr</a>
cat
  <a name="10434">cat</a>
format
  <a name="7066">format</a>
icompare
  <a name="10350">icompare</a>
replace
  <a name="10414">replace</a>
replaceInPlace
  <a name="10424">replaceInPlace</a>
toLower
  <a name="10346">toLower</a>
toLowerInPlace
  <a name="10348">toLowerInPlace</a>
toUpper
  <a name="10342">toUpper</a>
toUpperInPlace
  <a name="10344">toUpperInPlace</a>
translate
  <a name="10398">translate</a>
translateInPlace
  <a name="10406">translateInPlace</a>
trim
  <a name="10338">trim</a>
trimInPlace
  <a name="10340">trimInPlace</a>
trimLeft
  <a name="10330">trimLeft</a>
trimLeftInPlace
  <a name="10332">trimLeftInPlace</a>
trimRight
  <a name="10334">trimRight</a>
trimRightInPlace
  <a name="10336">trimRightInPlace</a>
[0] CrossRefCreator end
