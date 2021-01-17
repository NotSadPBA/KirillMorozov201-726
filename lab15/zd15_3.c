#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
 
float RingS(float R1,float R2)
{
  return 3.14*(R1*R1-R2*R2);
}
 
int main(void)
{
    int i;
    float R1,R2;
    for (i=1; i<=3;i++)
    {
     printf ("R1= ");
     scanf ("%f", &R1);
     printf("R2= ");
     scanf("%f", &R2);
     printf("S = %.f\n", RingS(R1,R2));
    }
  return 0;
}