#include <stdio.h>
#include <math.h>
 
int main()
{
    int N,i,isame,jsame,j;
    int s[10];
    printf ("N = ");
    scanf ("%d", &N);

    for (i=1;i<=N;i++)
    {
        printf ("s[%d] = ", i);
        scanf ("%d", &s[i]);
    }

    for (i=1;i<=N-1;i++)
    {
        for (j=i+1;j<=N;j++)
        {
            if (s[i]==s[j])
            isame=i;
            jsame=j;
        }
    }
    if (isame>jsame)
   {printf ("1-ый номер= %d, 2-ой номер = %d", isame,jsame);}
   if (isame<jsame)
   {printf ("1-ый номер= %d, 2-ой номер = %d", jsame,isame);}
   return 0;
}