#!/bin/sh

#----------------------------------------
#
#  configAll.sh
#
#  Created by Setsu on 6/17/2010.
#  Copyright 2010 RoundSquare Inc. All rights reserved.
#----------------------------------------

isMac=`uname -a | grep "Darwin" | wc -w`

configstr="CXXFLAGS=\"-O2 -Wall -I/opt/poco/include -L/opt/poco/lib\" ./configure --cache=/dev/null --prefix=/usr"

for i in "$@"
do
  if [ $i = "-d" ]; then
    configstr="CXXFLAGS=\"-g -D_DEBUG -Wall\" ./configure --cache=/dev/null --prefix=/usr"
  fi
  if [ $i = "-debug" ]; then
    configstr="CXXFLAGS=\"-g -D_DEBUG -Wall\" ./configure --cache=/dev/null --prefix=/usr"
  fi
done

dirOrigin=$PWD

dirs=`ls | grep 100._`

for str in $dirs
do
  echo
  echo $str
  cd $dirOrigin/$str

  if [ 0 != ${isMac} ]; then
    echo "cat bootstrap | sed s/libtoolize/glibtoolize/ > bootstrap.mac"
    cat bootstrap | sed s/libtoolize/glibtoolize/ > bootstrap.mac
    echo "chmod +x bootstrap.mac"
    chmod +x bootstrap.mac
    echo "./bootstrap.mac"
    ./bootstrap.mac
  else
    echo "./bootstrap"
    ./bootstrap
  fi

  echo $configstr
  eval $configstr
done
