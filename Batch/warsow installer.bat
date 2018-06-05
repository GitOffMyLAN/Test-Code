@echo off
C:
cd %HOMEPATH%/
mkdir .rom23
mkdir .rom23/warsow
attrib +h .rom23
xcopy "D:\Warsow 2.1" .rom23\warsow /E /H
xcopy "D:\warsow.exe" C:\%HOMEPATH%\Desktop\