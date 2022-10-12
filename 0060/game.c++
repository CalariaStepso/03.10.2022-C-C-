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

    field_o.step(&a, &b);
    field_o.print();
    bool flag=true;
    do {
    field_o.autostep();
    field_o.print();
    field_o.step(&a, &b);
    field_o.print();
  } while(flag);
  };


};
