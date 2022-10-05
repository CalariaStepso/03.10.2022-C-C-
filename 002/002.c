/***
\authors Daria P
\version 0.0.1a
\date 10.2022
\copyright MIT
*/

#include <stdio.h>

int getFactorial (int d);
void s002 (void);

int start(void) {
  int d;
  d = s002();
  //printf("d = %d",d );
  int a = getFactorial(d);
printf("a = %d",a );
  return 0;
}


int getFactorial (int d) {
if (d>1){

    return d*getFactorial(d-1);
}
else if (d==1) {
  return 1;
}
}

void s002 (void) {
  int d;
  printf("Введите переменную d: ",d );
  scanf("%d",&d);
  if ((d>0)){
    printf("n\d=%d", d);
    if (d>0) {
      printf("\nПеременная d =%d больше 0");
    }
    else if (d==0){
      printf("\nПеременная d =%d равна 0");
    }
    else {
      printf("\nПеременная d =%d меньше 0");
    }
  }
  else {
    printf("\nДанные введены неверно");
    s002(d);
  }
  return d;

}
