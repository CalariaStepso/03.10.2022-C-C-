/***
\authors Daria P
\version 0.0.1a
\date 10.2022
\copyright MIT
*/

#include <stdio.h>
#include "0052.h"
#include <stdlib.h>
#include <stdbool.h>

#define SZ  3
void step (char *p, int i, int *flag);
void printSZ (char a[SZ][SZ]);
bool check(char *p);

void start (){

  struct xo {
    char a[SZ][SZ];// c
    char b;
    bool c;
  };

  struct xo d={{{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}}, " ", false};

  printSZ (d.a);

  int count = 0;
  int flag = 0;

  do {
  step (&d.a[0][0], count, &flag);
  printSZ (d.a);
  if (check(&d.a[0][0])) break;
  count++;
} while (flag<9);
}

void printSZ (char a[SZ][SZ]){
    for (int i = 0; i<SZ; i++){
      for (int n = 0; n<SZ; n++){
          printf(" %c", a[i][n]);
          if (n+1<SZ) printf (" |");
      }
          if (i+1<SZ) printf("\n___________\n");
   }
}

void step (char *p, int i, int *flag) {
  int a,b;

  if (i % 2 == 0) {
  printf("\nХод пользователя 1: укажите ячейку");
  }
  else {
  printf("\nХод пользователя 2: укажите ячейку");
  }

  printf("\nВведите номер строки:");
  scanf ("%d", &a);
  printf("Введите номер столбца:");
  scanf ("%d", &b);

bool error;
do{
  if (((a > 2) || (b > 2))||(*(p+a*SZ+b)=='x')||(*(p+a*SZ+b)=='o')) {
    printf("\nНеверная ячейка, повторите ввод");
    printf("\nВведите номер строки:");
    scanf ("%d", &a);
    printf("Введите номер столбца:");
    scanf ("%d", &b);
    error = true;
  } else error = false;
}while (error);
  if (i % 2 == 0) {
  *(p+a*SZ+b) = 'x';
  }
  else {
    *(p+a*SZ+b) = 'o';
    }
      printf("\nШаг № %d", *flag);
      printf("\n");
      *flag+=1;
  //printf("\n--: %p >> %d \n", p, *(p+a*SZ+b));
}

bool check(char *p) {
  bool b = false;
for (int i=0; i<SZ; i++){ // строки
if (((*(p+i*3+0)!=' ')&&(*(p+i*3+0)==*(p+i*3+1)))&&(*(p+i*3+1)==*(p+i*3+2))) {
b = true;
break;
}

else if (((*(p+i+0)!=' ')&&(*(p+i+0)==*(p+i+3)))&&(*(p+i+3)==*(p+i+6))){
b = true;
break;
}

else if (((*(p+0)!=' ')&&(*(p+0)==*(p+4)))&&(*(p+4)==*(p+8))){
b = true;
break;
}

else if (((*(p+2)!=' ')&&(*(p+2)==*(p+4)))&&(*(p+4)==*(p+6))){
b = true;
break;
}
}
  if (b){
  printf("\nПобеда!\n");
  return true;
} else return false;



}
