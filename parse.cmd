@echo off
cd res
del decl_*.txt
..\Amber\Parser\Release\Parser.exe ..\parse_project.txt
cd ..
