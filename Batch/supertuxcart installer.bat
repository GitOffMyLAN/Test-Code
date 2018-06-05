@echo off
C:
cd %HOMEPATH%\
mkdir .rom23
attrib +h .rom23
mkdir .rom23\stk
xcopy "D:\SuperTuxKart 0.9.3" .rom23\stk /E /H
xcopy "D:\supertuxkart.exe" "C:\%HOMEPATH%\Desktop\" /E /H