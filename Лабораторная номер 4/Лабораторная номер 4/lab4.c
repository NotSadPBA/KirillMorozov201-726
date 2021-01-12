#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, di, pi = 3.14, a1, a2, b1, b2;
	printf ("¬ведите стороны пр€моугольника:\n");
	scanf ("%d\n%d", &a, &b);
	int s = a * b;
	int p = (a + b) * 2;
	printf("¬ведите диаметр окружности:\n");
	scanf("%d", &di);
	int l = pi * di;
	printf("¬ведите два ненулевых числа:\n");
	scanf("%d\n%d", &a1, &b1);
	int sum1 = a1 + b1;
	int raz1 = a1 - b1;
	int proiz1 = a1 * b1;
	int del1 = (a1 * a1) / (b1 * b1);
	printf("¬ведите ещЄ раз два ненулевых числа:\n");
	scanf("%d\n%d", &a2, &b2);
	int sum2 = a2 + b2;
	int raz2 = a2 - b2;
	int proiz2 = a2 * b2;
	int del2 = (fabs(a2) * fabs(a2)) / (fabs(b2) * fabs(b2));
	printf("ѕлощадь пр€моугольника и его периметр равны:%d %d\n", s, p);
	printf("ƒлина окружности равна:%d\n", l);
	printf("Cумма, разность, произведение и частное их квадратов:%d %d %d %d\n", sum1, raz1, proiz1, del1);
	printf("Cумма, разность, произведение и частное их модулей вторых чисел :%d %d %d %d\n", sum2, raz2, proiz2, del2);
}