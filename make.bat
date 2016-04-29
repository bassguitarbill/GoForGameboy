@ECHO off
IF EXIST bin GOTO MAKE
mkdir bin
:MAKE
cd src
lcc -o ..\bin\go.gb go.c
cd ..
