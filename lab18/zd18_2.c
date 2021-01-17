#include <stdio.h>
#include <math.h>
 
int main()
{
    int N,i,j;
    float sum;
    int A[10];
    float B[10];
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
       sum=sum+A[i];
       B[i]=sum/i;
       printf("%.1f\n", B[i]);
    }
   return 0;
}