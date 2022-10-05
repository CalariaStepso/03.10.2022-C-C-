###
# \authors Daria P
# \version 0.0.1a
# \date 10.2022
# \copyright MIT
###

PACKAGE = 002.osvoj.ru

default: clear 002
	gcc -o 002.exe ./main.c ./002.o

002:
	gcc -c ./002.c


clear:
	rm -rf ./*.exe ./*o

doc:
	doxygen ./Doxyfile
