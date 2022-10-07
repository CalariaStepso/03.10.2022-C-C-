###
# \authors Daria P
# \version 0.0.1a
# \date 10.2022
# \copyright MIT
###

PACKAGE = 0052.osvoj.ru

default: clear 0052
	gcc -o 0052.exe ./main.c ./0052.o

0052:
	gcc -c ./0052.c


clear:
	rm -rf ./*.exe ./*o

doc:
	doxygen ./Doxyfile
