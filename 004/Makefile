###
# \authors Daria P
# \version 0.0.1a
# \date 10.2022
# \copyright MIT
###

PACKAGE = 004.osvoj.ru

default: clear 004
	gcc -o 004.exe ./main.c ./004.o

004:
	gcc -c ./004.c


clear:
	rm -rf ./*.exe ./*o

doc:
	doxygen ./Doxyfile
