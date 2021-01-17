#include <stdio.h>
#include <math.h>
 
int main()
{
    int N,i,j,A2;
    float sum;
    int A[10];
    printf ("N = ");
    scanf ("%d", &N);

    for (i=1;i<=N;i++)
    {
        printf ("A[%d] = ", i);
        scanf ("%d", &A[i]);
    }
    printf ("\n");
    sum=0;
    for (i=1;i<=N;i++)
    {
       if ((A[i]%2)==1)
       A2=A[i];
    }
    for (i=1;i<=N;i++)
    {
       if ((A[i]%2)==1)
       A[i]=A[i]+A2;
    }
    for (i=1;i<=N;i++)
    {
        printf ("A[%d] = %d\n", i, A[i]);
    }
   return 0;
}