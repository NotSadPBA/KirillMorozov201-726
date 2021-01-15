#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int a;
	float pi = 3.14;
	printf("Введите значение угла a в градусах (0 < α < 360):\n");
	scanf("%d", &a);
	float rad = pi * a / 180;
	printf("В радианах равно:%f\n", rad);


	int a1;
	printf("Введите значение угла α в радианах (0 < α < 2·π):\n");
	scanf("%d", &a1);
	float krad = 180 * a1 / pi;
	printf("В радианах равно:%f\n", krad);


	int ves, stoim, ves2;
	printf("Введите вес и стоимость конфет:\n");
	scanf("%d\n%d", &ves, &stoim);
	int odinkg = stoim / ves;
	printf("Введите вес, который хотите посчитать:\n");
	scanf("%d", &ves2);
	int stoimob = odinkg * ves2;
	printf("В радианах равно:%d\n%d\n", odinkg, stoimob);


	int v1, v2, s, t;
	printf("Введите v1, v2, s, t:\n");
	scanf("%d\n%d\n%d\n%d", &v1, &v2, &s, &t);
	int res = s + v1 * t + v2 * t;
	printf("Расстояние между автомобилями:%d\n", res);


	int a2, b2;
	printf("Введите a, b:\n");
	scanf("%d\n%d", &a2, &b2);
	int res1 = -1 * b2 / a2;
	printf("Решение:%d\n", res1);


	int a3, b3, c3, a4, b4, c4;
	printf("Введите a, b, c, a1, b1, c1:\n");
	scanf("%d\n%d\n%d\n%d\n%d\n%d", &a3, &b3, &c3, &a4, &b4, &c4);
	int x = (c4 - (b4 * c3)) / ((b3 * a4) - a3);
	int y = (c3 - (a3 * x)) / b3;
	printf("x и y равен:%d\n%d", x, y);
}
