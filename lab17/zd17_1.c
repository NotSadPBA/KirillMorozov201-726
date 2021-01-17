#include <stdio.h>
#include <math.h>
 
int main()
{
    int N,i,i1,j,t,k,l;
    float sr;
    int s[10];
    int sum=0;
    int count=0;
    printf ("N = ");
    scanf ("%d", &N);
    printf ("K = ");
    scanf ("%d", &k);
    printf ("L = ");
    scanf ("%d", &l);

    for (i=1;i<=N;i++)
    {
        printf ("s[%d] = ", i);
        scanf ("%d", &s[i]);
    }
    for (i=k;i<=l;i++)
    {
       sum=sum+s[i];
       count=count+1;
    }
   sr=sum/count;
   printf ("Среднее арифметическое = %.2f", sr);
   return 0;
}