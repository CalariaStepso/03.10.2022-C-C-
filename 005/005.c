/***
\authors Daria P
\version 0.0.1a
\date 10.2022
\copyright MIT
*/

#include <stdio.h>
#include "005.h"

void start(int *p){


//printf("Адрес а: %d", &a);
printf("\nАдрес а: %d", p);

//printf("\nЗначение а: %d", a);
printf("\nЗначение а: %d", *p);
*p = 10;

}
