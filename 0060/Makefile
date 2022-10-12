###
# \authors Daria P
# \version 0.0.1a
# \date 10.2022
# \copyright MIT
###

PACKAGE = game.osvoj.ru

default: clear game
	g++ -o game.exe ./main.c++

game:
	g++ -c game.c++

clear:
	rm -rf ./*.exe ./*.o

doc:
	doxygen ./Doxyfile
