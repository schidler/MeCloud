//
//  DOMWriter ReadMe.txt
//
//  Created by Setsu on 8/1/2010.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is DOMWriter?
//----------------------------------------
Sample code which uses Poco::DOMWriter.
   http://pocoproject.org/docs/Poco.XML.DOMWriter.html

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
Open DOMWriterTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for DOMWriterTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
[0] DOMWriterTest start
<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
	<head>
		<title>Sample HTML</title>
		<meta content="text/html; charset=utf-8" http-equiv="content-type"/>
		<link href="css/styles.css" rel="stylesheet" type="text/css"/>
	</head>
	<body>This is a sample.</body>
</html>
[0] DOMWriterTest end
