@echo off

rem #----------------------------------------
rem #
rem #  buildAll.bat
rem #
rem #  Created by Setsu on 6/18/2010.
rem #  Copyright 2010 RoundSquare Inc. All rights reserved.
rem #----------------------------------------

if defined POCO_BASE (
 for /d %%i in (*) do (
  echo:
  echo %%i
  pushd %%i
  for %%s in (*.sln) do (
   MSBuild.exe %%s /property:Configuration=Debug
   MSBuild.exe %%s /property:Configuration=Release
  )
  popd
 )
) else (
  echo Environment variable "POCO_BASE" is not defined!
)

