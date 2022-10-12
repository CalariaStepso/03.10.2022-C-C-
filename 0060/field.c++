/***
\authors Daria P
\version 0.0.1a
\date 10.2022
\copyright MIT
*/
#include <iostream>
#include "gamer.c++"
using namespace std;

#define SZ  3

class Field{
private:

  char a[SZ][SZ] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}}; // поле
public:

  void print(){
    //cout << "\e[1;1H\e[2J";
      for (int i = 0; i<SZ; i++){
        for (int n = 0; n<SZ; n++){
          cout << a[i][n];
            if (n+1<SZ) cout << " | ";
        }
            if (i+1<SZ) cout <<"\n___________\n";
     }
     cout << endl;
  }

  void step(int *i, int *j){ //если 1, то gamer, иначе - autogamer
    Gamer gamer_o;

      gamer_o.pick_cell(i, j);
      a[*i][*j] = 'x';
  }

  void autostep(){ //если 1, то gamer, иначе - autogamer
    Autogamer autogamer_o;
int i, j;
do{
      autogamer_o.autopick(&i, &j);
      if (a[i][j]==' ') {
          a[i][j] = 'o';
          break;
      }
    } while (true);

  }

};
