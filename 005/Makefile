###
# \authors Daria P
# \version 0.0.1a
# \date 10.2022
# \copyright MIT
###

PACKAGE = 005.osvoj.ru

default: clear 005
	gcc -o 005.exe ./main.c ./005.o

005:
	gcc -c ./005.c


clear:
	rm -rf ./*.exe ./*o

doc:
	doxygen ./Doxyfile
