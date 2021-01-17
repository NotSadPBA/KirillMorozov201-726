#include <stdio.h>
#include <math.h>
 
int main()
{
    int N,i;
    float sr;
    int A[10];
    int B[10];
    printf ("N = ");
    scanf ("%d", &N);

    for (i=1;i<=N;i++)
    {
        printf ("A[%d] = ", i);
        scanf ("%d", &A[i]);
    }
    printf ("\n");
    for (i=1;i<=N;i++)
    {
        printf ("B[%d] = ", i);
        scanf ("%d", &B[i]);
    }
    for (i=1;i<=N;i++)
    {
       A[i]=A[i]+B[i];
       B[i]=A[i]-B[i];
       A[i]=A[i]-B[i];

    }
    printf ("\n");
    for (i=1;i<=N;i++)
    {
        printf ("A[%d] = %d\n", i, A[i]);
    }
   printf ("\n");
   for (i=1;i<=N;i++)
    {
       printf ("B[%d] = %d\n", i, B[i]);
    }
   return 0;
}
