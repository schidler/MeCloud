#! /bin/sh

#----------------------------------------
#
#  archiveAll.sh
#
#  Created by Setsu on 6/18/2010.
#  Copyright 2010 RoundSquare Inc. All rights reserved.
#----------------------------------------

dirOrigin=$PWD

dirs=`ls | grep _`

tempdir=$dirOrigin/temp

mkdir $tempdir

changedArchives=""
noZipFile=false

for str in $dirs
do
  echo
  echo $str
  mystr=`echo $str | sed -e 's/[0-9_]//g'`
  cd $tempdir
  unzip $dirOrigin/downloads/$mystr || noZipFile=true

  cd $tempdir
  svn export "http://subversion.assembla.com/svn/poco_fanatic/trunk/"$str
  differenceCount=`diff -r $mystr $str | wc -w`
  rm -Rf $mystr
  mv $str $mystr

  if [ 0 == $differenceCount ]; then
    if [ true == $noZipFile ]; then
      differenceCount=1
    fi
  fi

  if [ 0 != $differenceCount ]; then
    if [ true == $noZipFile ]; then
      echo "no zip file found --- created"
    else
      echo "change(s) found"
	fi
    zip -r $mystr.zip $mystr
	cp $mystr.zip $dirOrigin/downloads/.
	changedArchives=$changedArchives$mystr".zip "
  else
    echo "no change found"
  fi
  rm -Rf $mystr
done

rm -Rf $tempdir

echo
echo "Changed archives: "$changedArchives
