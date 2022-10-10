/***
\authors Daria P
\version 0.0.1a
\date 10.2022
\copyright MIT
*/
#include <iostream>
using namespace std;
#include "complex.c++"


class Calc {
private:
  ComplexNumb a, b;
public:
  Calc(){
    bool flag;
    do {
    float c, d, e, f;
    char str=' ';
  //  cout << "\e[1;1H\e[2J";
    cout << "Введите вещественную часть 1го числа ";
    cin >> c;
    cout << "Введите мнимую часть 1го числа ";
    cin >> d;
    a = ComplexNumb(c,d);
    a.print();
    cout << "Введите вещественную часть 2го числа ";
    cin >> e;
    cout << "Введите мнимую часть 2го числа ";
    cin >> f;
    b = ComplexNumb(e,f);
    b.print();

    ComplexNumb  res;
    cout << "Введите операцию: +, -, *, /\n";
    cin >> str;
    if (str=='+'){
      res = a + b;
      cout << "Сложение: ";
       res.print();
    }
    else if (str=='-'){
      res = a - b;
      cout << "Вычитание: " ;
      res.print();
    }
    else if (str=='*'){
      res = a * b;
      cout << "Умножение: " ;
      res.print();
    }
    else if (str=='/'){
      if ((e!=0)&&(f!=0)){
      res = a / b;
      cout << "Деление: " ;
      res.print();
    }
      else {
        cout <<"Деление на 0 невозможно\n";
      }
    }
    else if (str=='=='){

      cout << "Сравнение: " ;
      if (a==b) {
        cout<<"Равно\n";
      } else cout << "Неравно\n" ;

    }

    cout << "Для продолжения нажмите любую клавишу, для выхода - 0\n";
    cin >> str;
    if (str=='0') {
      flag =false;
    } else flag = true;
  } while (flag);

  }
  ~Calc(){
  }
};
