/***
\authors Daria P
\version 0.0.1a
\date 10.2022
\copyright MIT
*/

#include <stdio.h>
#include "0051.h"
#include <stdlib.h>


void start(void){
int a[10];

for(int i = 0; i<10; i++) {
  a[i] = (int)(random()*100/RAND_MAX);
  printf("\na[%d]=%d",i, a[i]);
}
printf("\n");
int buf = 0;
do{
buf=0;
for (int i=0;i<9;i++){
  if (a[i]>a[i+1]) {
    buf = a[i+1];
    a[i+1] = a[i];
    a[i]=buf;
    printf("\ni=%d",i);
    printf("\na[i]=%d",a[i]);
  }
}
} while (buf!=0);

for(int i = 0; i<10; i++) {
printf("\na[%d]=%d",i, a[i]);
}

}
