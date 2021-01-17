#include <stdio.h>
#include <math.h>
 
int main()
{
    int N,i,d;
    int s[10];
    printf ("N = ");
    scanf ("%d", &N);

    for (i=1;i<=N;i++)
    {
        printf ("s[%d] = ", i);
        scanf ("%d", &s[i]);
    }
    d = s[2]-s[1];
    for (i=1;i<=N;i++)
    {
        if (d != s[i]-s[i-1])
        {
            printf ("0");
        }
    }
   printf ("Разность прогрессии = %d", d);
   return 0;
}