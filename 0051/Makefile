###
# \authors Daria P
# \version 0.0.1a
# \date 10.2022
# \copyright MIT
###

PACKAGE = 0051.osvoj.ru

default: clear 0051
	gcc -o 0051.exe ./main.c ./0051.o

0051:
	gcc -c ./0051.c


clear:
	rm -rf ./*.exe ./*o

doc:
	doxygen ./Doxyfile
