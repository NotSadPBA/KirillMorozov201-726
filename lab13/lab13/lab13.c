#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    double a, b;
    printf("Введите цену 1 кг конфет:\n");
    scanf("%lf", &a);
    for (b = 0.1; b < 1; b += 0.1)
        printf("%f кг будет стоить: %f \n ", b, a * b);


    int n, a1;
    double ot = 1;
    printf("Введите число N:\n");
    scanf("%d", &n);
    for (a1 = 0; a1 <= n; ++a1)
        ot *= 1.0 + (double)a1 / 10;
    printf("Ответ: %f \n ", ot);


    int n1, a2;
    int ot1 = 0;
    printf("Введите число N:");
    scanf("%d", &n1);
    for (a2 = 1; a2 <= (2 * n1 - 1); a2 += 2) {
        ot1 += a2;
        printf("Ответ:%i \n ", ot1);
    }


    double a3, ot2 = 1;
    printf("Введите вещественное число A:");
    scanf("%lf", &a3);
    int n2, i, st = 1;
    printf("Введите целое число N:");
    scanf("%d", &n2);
    for (i = 1; i <= n2; ++i) {
        st = st * a3;
        ot2 = ot2 + st;
        printf("%f \n ", ot2);
    }


    double a4;
    printf("Введите вещественное число A:");
    scanf("%lf", &a4);
    int n3;
    printf("Введите целое число N:");
    scanf("%d", &n3);
    double a5 = 1, ot3 = 1;
    int d;
    for (d = 1; d <= n3; ++d)
    {
        a5 = a5 * a4;
        a5 = -1 * a5;
        ot3 = ot3 + a5;
    }
    printf("%f \n ", ot3);
}