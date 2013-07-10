//
//  SAXParser ReadMe.txt
//
//  Created by Setsu on 8/5/2010.
//  Copyright 2010 RoundSquare Inc. All rights reserved.
//

//----------------------------------------
// What is SAXParser?
//----------------------------------------
Sample code which uses Poco::SAXParser.
   http://pocoproject.org/docs/Poco.XML.SAXParser.html

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
Open SAXParserTest.sln file from VC++, then build and run it.

//----------------------------------------
// Console output for SAXParserTest
//  NOTE: Number in bracket indicates threadID
//----------------------------------------
[0] SAXParserTest start
[0] --- original xml ---
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

[0] --- parsed ---
[0] - startDocument (line 1, col 0)
[0] - startDTD (line 2, col 120)
[0] - endDTD (line 2, col 120)
[0] - startPrefixMapping (line 3, col 0)
[0]     prefix=, uri=http://www.w3.org/1999/xhtml
[0] - startElement (line 3, col 0)
[0]     uri:       http://www.w3.org/1999/xhtml
[0]     localName: html
[0]     qname:     html
[0] - startElement (line 4, col 1)
[0]     uri:       http://www.w3.org/1999/xhtml
[0]     localName: head
[0]     qname:     head
[0] - startElement (line 5, col 2)
[0]     uri:       http://www.w3.org/1999/xhtml
[0]     localName: title
[0]     qname:     title
[0] - characters (line 5, col 9)
[0] Sample HTML
[0] - endElement (line 5, col 20)
[0] - startElement (line 6, col 2)
[0]     uri:       http://www.w3.org/1999/xhtml
[0]     localName: meta
[0]     qname:     meta
[0]     Attributes: 
[0]      content="text/html; charset=utf-8"
[0]      http-equiv="content-type"
[0] - endElement (line 6, col 70)
[0] - startElement (line 7, col 2)
[0]     uri:       http://www.w3.org/1999/xhtml
[0]     localName: link
[0]     qname:     link
[0]     Attributes: 
[0]      href="css/styles.css"
[0]      rel="stylesheet"
[0]      type="text/css"
[0] - endElement (line 7, col 64)
[0] - endElement (line 8, col 1)
[0] - startElement (line 9, col 1)
[0]     uri:       http://www.w3.org/1999/xhtml
[0]     localName: body
[0]     qname:     body
[0] - characters (line 9, col 7)
[0] This is a sample.
[0] - endElement (line 9, col 24)
[0] - endElement (line 10, col 0)
[0] - endPrefixMapping (line 10, col 0)
[0]     prefix=
[0] - endDocument (line 11, col 0)
[0] SAXParserTest end
