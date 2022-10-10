###
# \authors Daria P
# \version 0.0.1a
# \date 10.2022
# \copyright MIT
###

PACKAGE = 006.osvoj.ru

default: clear 006
	g++ -o 006.exe ./main.c++ 

006:
	g++ -c complex.c++

clear:
	rm -rf ./*.exe ./*.o

doc:
	doxygen ./Doxyfile
