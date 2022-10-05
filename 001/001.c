/***
\authors Daria P
\version 0.0.1a
\date 10.2022
\copyright MIT
*/

#include <stdio.h>

int s001 (int a);

int start(void) {
  int a=5;
  int b,c;
  b=a*3;
  c=b-a;
  printf("c=%d;",c );
  printf("a=%d;\n",a );
  printf("b=%d",b );
  int d;
  printf("Введите переменную d: ",c );
  scanf("%d",&d);
  printf("\nd=%d",d);
  s001(d);
  return 0;
}

int s001 (int a) {
if (a>0) {
  printf("\nПеременная a %d больше 0");
}
else if (a==0){
  printf("\nПеременная a %d равна 0");
}
else {
  printf("\nПеременная a %d меньше 0");
}

}
