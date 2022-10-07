/***
\authors Daria P
\version 0.0.1a
\date 10.2022
\copyright MIT
*/

#include <stdio.h>
#include "0052.h"
#include <stdlib.h>


void start(void){
char a[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};


for (int i=0; i<3; i++){
for (int j=0; j<3; j++){
  printf(" %c ", a[i][j]);
  if(j+1 <3) printf("|");
  }
if (i+1<3) printf("\n___________\n");
}

printf("\n\n");
step(1,1, a);
}

void step (int ii, int jj, char a[3][3]) {

  for (int i=0; i<3; i++){
    for (int j=0; j<3; j++){
      if ((i==ii)&&(j==jj))   a[i][j] = 'x';
       printf(" %c ", a[i][j]);
    if(j+1 <3) printf("|");
    }
  if (i+1<3) printf("\n___________\n");
  }

}
