#include <stdio.h>
#include <math.h>
int main()
{
    int f1,f2,n,k;
    printf ("Введите N ");
    scanf ("%i", &n);
    f1=1;
    f2=1;
    k=2;
    while (n > f2)
    {
     f2 = f1+f2;
     f1 = f2-f1;
     k+=1;
    }
  if (n == f2)
    printf ("Порядковый номер числа = %i \n", k);
  else 
    printf ("Не является числом Фибоначчи");
  return 0;
}