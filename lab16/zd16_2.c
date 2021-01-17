#include <stdio.h>
#include <math.h>
 
int main()
{
    int N,A,D;
    int s[10];
    int i = 1;
    printf ("N (>1) = ");
    scanf ("%d", &N);
    printf ("A = ");
    scanf ("%d", &A);
    printf ("D = ");
    scanf ("%d", &D);
    s[1]=A;
    for (i=2;i<=N;i++,D*=D)
    {
        s[i]=A*D;
    }
    for (i=1;i<=N;i++)
    {
        printf ("a[%d] = %d\n",i,s[i]);
    }
    return 0;
}