#include <stdio.h>
#include <math.h>
 
int main()
{
    int N,i,imax;
    int s[10];
    printf ("N = ");
    scanf ("%d", &N);

    for (i=1;i<=N;i++)
    {
        printf ("s[%d] = ", i);
        scanf ("%d", &s[i]);
    }

    for (i=2;i<=N;i++)
    {
        if ((s[i]>s[i-1])||(s[i]>s[i+1]))
        {
            imax=i;
        }
    }
   printf ("Номер локального максимума = %d", imax);
   return 0;
}