@echo off
set /p name=Insira o nome do arquivo (sem conter aspas):
windres resources.rc -o resources.o

rem Caso de erro acontecer irá tentar achar os arquivos no mesmo diretório do recompile.bat

g++ -o "../%name%.exe" "../%name%.cpp" resources.o || ( g++ -o "%name%.exe" "%name%.cpp" resources.o )

timeout 1