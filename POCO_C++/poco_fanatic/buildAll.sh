#!/bin/sh

#----------------------------------------
#
#  buildAll.sh
#
#  Created by Setsu on 6/17/2010.
#  Copyright 2010 RoundSquare Inc. All rights reserved.
#----------------------------------------

dirOrigin=$PWD

dirs=`ls | grep 100._`

for str in $dirs
do
  echo
  cd $dirOrigin/$str
  echo $str
  make
done
