/***
\authors Daria P
\version 0.0.1a
\date 10.2022
\copyright MIT
*/

///Подключаем стандартную библиотеку
#include <iostream>
//#include "error.c++"
using namespace std;

double divide(int, int);

int main (void) {
int x = 500;
int y = 0;

try{
  double z = divide(x,y);
  cout << z << endl;
}
catch(const char* msg){
  cout <<"Error!"<<msg<<endl;
}

return 0;
}

double divide (int a, int b){
if(b == 0){
  throw "Деление на 0!";
}
return a/b;

}
