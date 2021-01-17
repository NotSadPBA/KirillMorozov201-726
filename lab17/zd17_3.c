#include <stdio.h>
#include <math.h>
 
int main()
{
    int N,i,d,min;
    int s[10];
    printf ("N = ");
    scanf ("%d", &N);

    for (i=1;i<=N;i++)
    {
        printf ("s[%d] = ", i);
        scanf ("%d", &s[i]);
    }
    min = s[2];
    for (i=2;i<=N;i+=2)
    {
        if (s[i]<min)
        {
            min=s[i];
        }
    }
   printf ("Минимальный элемент = %d", min);
   return 0;
}