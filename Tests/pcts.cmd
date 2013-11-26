@echo off
cls
del res\decl_*.txt
..\Amber\Parser\Release\Parser.exe comp_types_project.txt
move decl_*.txt res\ > null
