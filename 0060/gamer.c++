/***
\authors Daria P
\version 0.0.1a
\date 10.2022
\copyright MIT
*/
#include <iostream>
#include "time.h"
using namespace std;

class Gamer {
public:
  int id;
  int a,b;// номер ячейки

  void pick_cell (int *a, int *b) {

cout << "Введите строку: "<<endl;
cin >> *a;
cout << "Введите ячейку: "<<endl;
cin >> *b;

};
};

class Autogamer
{
public:
  void autopick(int *i, int *j) {

      srand(time(NULL));
        *i = rand()%3;
        *j = rand()%3;
 };
};
