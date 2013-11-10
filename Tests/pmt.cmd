@echo off
cls
del res\decl_*.txt
..\Amber\Parser\Release\Parser.exe min_tests_project.txt
move decl_*.txt res\ > null
