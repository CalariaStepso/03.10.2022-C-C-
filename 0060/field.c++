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

class Field {
private:

  char a[SZ][SZ] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}}; // поле
public:

  void print(){
    cout << "\e[1;1H\e[2J";
      for (int i = 0; i<SZ; i++){
        for (int n = 0; n<SZ; n++){
          cout << a[i][n];
            if (n+1<SZ) cout << " | ";
        }
            if (i+1<SZ) cout <<"\n___________\n";
     }
     cout << endl;
  }

  void step(int *i, int *j){
    Gamer gamer_o;

    do {
      gamer_o.pick_cell(i, j);
    } while(check(i,j)==false);
      a[*i][*j] = 'x';
  }

  void autostep(){
    Autogamer autogamer_o;
int i, j;
do{
      autogamer_o.autopick(&i, &j);
      if (a[i][j]==' ') {
          a[i][j] = 'o';
          break;
      }
    } while (true);
  };

  bool check(int *i, int *j){
    bool error;
    do{
      if (((*i > 2) || (*j > 2))||(a[*i][*j]=='x')||(a[*i][*j]=='o')) {
        return false;
      } else {
        return true;
        break;
      }
  }while (1);
};

void win_or_not() {
bool b;
for (int i=0; i<SZ; i++){ // строки
if (((a[i][0]!=' ')&&(a[i][0]==a[i][1]))&&(a[i][1]==a[i][2])) {
b = true;
break;
}

else if (((a[0][i]!=' ')&&(a[0][i]==a[1][i]))&&(a[1][i]==a[2][i])){
b = true;
break;
}

else if (((a[0][2]!=' ')&&(a[0][2]==a[1][1]))&&(a[1][1]==a[2][0])){
b = true;
break;
}

else if (((a[0][0]!=' ')&&(a[0][0]==a[1][1]))&&(a[1][1]==a[2][2])){
b = true;
break;
}
}
  if (b){
  printf("\nПобеда!\n");

}

};
};
