#!/bin/sh

#----------------------------------------
#
#  runAll.sh
#
#  Created by Setsu on 6/17/2010.
#  Copyright 2010 RoundSquare Inc. All rights reserved.
#----------------------------------------

dirOrigin=$PWD

hasLibPath=`printenv | grep LD_LIBRARY_PATH | grep /usr/local/lib | wc -w`
dirs=`ls | grep _`

if [ $# -eq 1 ]; then
  basenum=`expr $1 + 0`
else
  basenum=0
fi

if [ 0 -eq ${hasLibPath} ]; then
  export LD_LIBRARY_PATH=/usr/local/lib:$LD_LIBRARY_PATH
fi

for str in $dirs
do
  echo
  echo $str
  cd $dirOrigin"/"$str

  mynum=`echo $str | sed -e 's/[^0-9]//g'`
  mynum=`expr $mynum + 0`

  if [ $mynum -lt $basenum ]; then
    echo "skipped"
  else
    mystr=`echo $str | sed -e 's/[0-9_]//g'`
    if [ $mynum -eq 60 ]; then
      sudo LD_LIBRARY_PATH=/usr/local/lib ./$mystr"Test"
   else
      ./$mystr"Test"
    fi
  fi
done

