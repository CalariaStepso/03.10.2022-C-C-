/***
\authors Daria P
\version 0.0.1a
\date 10.2022
\copyright MIT
*/

#include <stdio.h>
#include "0050.h"

void start(int *p){
//printf("Адрес а: %d", &a);
//printf("\nАдрес а: %d", p);
//printf("\nЗначение а: %d", a);
//printf("\nЗначение а: %d", *p);

int a = 6;

int f = 0;
f = getFactorial(&a, &f);


}

int getFactorial (int *d, int *f) {

if ((*d)>1){
  if (*f ==0) *f = *d;
    *d = *d - 1;
    printf("\nd %d", *d);

    *f = *f * *d;

    getFactorial(d, f);
} else
printf("\nФакториал %d", *f);
}
