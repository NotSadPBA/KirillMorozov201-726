#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
 
float Fact2 (int N)
{
  int d=1;
  for (;N>0;N=N-2)
  d=d*N;
  return d;
}
 
int main(void)
{
    int i,N;
    for (i=1; i<=2;i++) //выполнить функцию два раза для чёт и нечёт значения N
    {
     printf ("N= ");
     scanf ("%d", &N);
     printf("двойной факториал = %.f\n", Fact2(N));
    }
  return 0;
}