@echo off
cls
del res\decl_*.txt
..\Amber\Parser\Release\Parser.exe old_comp_project.txt
move decl_*.txt res\ > null
