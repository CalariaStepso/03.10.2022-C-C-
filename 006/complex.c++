/***
\authors Daria P
\version 0.0.1a
\date 10.2022
\copyright MIT
*/
#include <iostream>
using namespace std;
#include "complex.h"

class ComplexNumb {
private:
float a;
float b;
public:
  ComplexNumb(float c, float d){
    a = c;
    b = d;
  };
  ComplexNumb(){
    a = 0;
    b = 0;
  };

  ComplexNumb plus(float c, float d){
    ComplexNumb e(a+c, b+d);
    return e;
  }

  ComplexNumb minus(float c, float d){
    ComplexNumb e(c-a, d-b);
    return e;
  }

  ComplexNumb multipl (float c, float d){
    ComplexNumb e(a*c-b*d, a*d+b*c);
    return e;
  }

  bool equal (float c, float d){
    bool r = false;
    if(a==c && b==d) r = true;
    return r;
  }

  ComplexNumb divide (float c, float d){
    float r = (a*c+b*d)/(a*a+b*b);
    float i = (d*a - c*b)/(a*a+b*b);
    ComplexNumb e(r, i);
    return e;
  }

  ComplexNumb plus(ComplexNumb c){
    return c.plus(a,b);
  }

  ComplexNumb minus(ComplexNumb c){
    return c.minus(a,b);
  }

  ComplexNumb multipl(ComplexNumb c){
    return c.multipl(a,b);
  }

  ComplexNumb divide(ComplexNumb c){
    return c.divide(a,b);
  }

 bool equal(ComplexNumb c){
    return c.equal(a,b);
  }


  void print(void){
    char z;
    if (b < 0){
      z = '-';
      b*=-1;
    } else z = '+';
      cout<<a<<z<<"j"<<b<<endl;
  }

};

ComplexNumb operator + (ComplexNumb c1, ComplexNumb c2){
  return ComplexNumb (c1.plus(c2));
};

ComplexNumb operator - (ComplexNumb c1, ComplexNumb c2){
  return ComplexNumb (c1.minus(c2));
};

ComplexNumb operator * (ComplexNumb c1, ComplexNumb c2){
  return ComplexNumb (c1.multipl(c2));
};

ComplexNumb operator / (ComplexNumb c1, ComplexNumb c2){
  return ComplexNumb (c1.divide(c2));
};

bool operator == (ComplexNumb c1, ComplexNumb c2){
  return (c1.equal(c2));
};
