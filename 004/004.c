/***
\authors Daria P
\version 0.0.1a
\date 10.2022
\copyright MIT
*/

#include <stdio.h>
#include <math.h>

double aZero(double b, double c);
double Descr(double a, double b, double c);

int start(void) {
  double a,b,c;
printf("Введите коэф. а: ",a );
scanf("%d",&a);
printf("Введите коэф. b: ",b );
scanf("%d",&b);
printf("Введите коэф. c: ",c );
scanf("%d",&c);

double res=0;
if (a==0) {
  res = aZero(b,c);
  printf("\nres0 = %d", res);
}
else {
  double D = Descr(a, b, c);
  printf("D = %d ",D );
  if (D<0) printf("Решения нет");
   if (D==0) printf("res = %d", (-b/(2*a)));
   if (D>0) {
     printf("\nres1 = %d", (-b+sqrt(D))/(2*a));
     printf("\nres2 = %d", (-b-sqrt(D))/(2*a));
   }

}

  return 0;
}

double aZero(double b, double c){
  return (-c/b);
}

double Descr(double a, double b, double c){
  double D = b*b-4*a*c;
return D;
}
