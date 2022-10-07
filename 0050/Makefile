###
# \authors Daria P
# \version 0.0.1a
# \date 10.2022
# \copyright MIT
###

PACKAGE = 0050.osvoj.ru

default: clear 0050
	gcc -o 0050.exe ./main.c ./0050.o

0050:
	gcc -c ./0050.c


clear:
	rm -rf ./*.exe ./*o

doc:
	doxygen ./Doxyfile
