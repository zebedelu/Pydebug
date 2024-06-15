windres resources.rc -o resources.o
g++ -o "../python compilator.exe" "../python compilator.cpp" resources.o
timeout 1