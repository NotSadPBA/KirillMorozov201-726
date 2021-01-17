#include <stdio.h>
#include <math.h>
 
int main()
{
    int N,i,min,max;
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
    min=1;
    max=1;
    for (i=1;i<=N;i++)
    {
       if (A[i]<A[min])
       min=i;
    }
    for (i=1;i<=N;i++)
    {
       if (A[i]>A[max])
       max=i;
    }
    for (i=min+1;i<max;i++)
    {
        A[i]=0;
    }
    for (i=1;i<=N;i++)
    {
        printf ("A[%d] = %d\n", i, A[i]);
    }
   return 0;
}