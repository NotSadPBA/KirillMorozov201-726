#include <stdio.h>
#include <math.h>
 
int main()
{
    int N,i;
    int s[10];
    printf ("N = ");
    scanf ("%d", &N);

    for (i=1;i<=N;i++)
    {
        printf ("s[%d] = ", i);
        scanf ("%d", &s[i]);
    }
    for (i=1;i<=N/2;i++)
    {
        printf ("%d\n",s[i]);
        printf ("%d\n",s[N-i+1]);
        if (N%2!=0)
        printf ("%d\n",s[N/2+1]);
    }
    return 0;
}