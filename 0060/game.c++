/***
\authors Daria P
\version 0.0.1a
\date 10.2022
\copyright MIT
*/
#include <iostream>
#include "field.c++"
using namespace std;

class Game {
private:
  int a, b;
  Gamer gamer_o;
  Field field_o;
  Autogamer autogamer_o;

public:
  Game(){


    field_o.print();
    int counter = 0;

    do {
      if (counter % 2 == 0){
        field_o.step(&a, &b);
      } else    field_o.autostep();

        field_o.print();
        field_o.win_or_not();
        counter ++;
  } while(counter < 9 );

  cout << "Конец игры!";

};
};
