/***
\authors Daria P
\version 0.0.1a
\date 10.2022
\copyright MIT
*/

///Подключаем стандартную библиотеку
#include <stdio.h>
#include "0050.h"

/// Объявляем функцию main
int main (void) {
  int ma;
   int *pm;
   pm = &ma;
   start(pm);
   printf("\nma = %d", ma);

  ///Возвращаем 0 при выполнении без ошибок

}
