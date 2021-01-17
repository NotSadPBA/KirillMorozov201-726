#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
 
int Sign(float x)
{
   if (x<0)
    return -1;
   if (x==0)
    return 0; 
   if (x>0)
    return 1;
}
 
int main(void)
{
    float a,b;
    float k;
    printf ("A = ");
    scanf ("%f", &a);
    printf("B = ");
    scanf("%f", &b);
    k = Sign(a)+Sign(b);
    printf("Sign(A)+Sign(B) = %.f\n",k);
    return 0;
}