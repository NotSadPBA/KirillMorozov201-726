#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b;
	printf("Введите две переменные:\n");
	scanf("%d %d", &a, &b);
	if (a == b)
		printf("%d %d\n", a = 0, b = 0);
	else
		if (a > b)
			printf("%d %d\n", b = a, a);
		else
			printf("%d %d\n", a = b, b);


	int a1, b1, c1;
	printf("Введите три числа:\n");
	scanf("%d %d %d", &a1, &b1, &c1);
	if ((a1 > b1) & (a1 > c1)) {
		if (b1 > c1)
			printf("%d\n", a1 + b1);
		else
			printf("%d\n", a1 + c1);
	}
	else if ((b1 > a1) & (b1 > c1)) {
		if (a1 > c1)
			printf("%d\n", b1 + a1);
		else
			printf("%d\n", b1 + c1);
	}
	else if ((c1 > a1) & (c1 > b1)) {
		if (a1 > b1)
			printf("%d\n", c1 + a1);
		else
			printf("%d\n", c1 + b1);
	}


	int a2, b2, c2;
	printf("Введите три точки:\n");
	scanf("%d %d %d", &a2, &b2, &c2);
	if (abs(a2 - b2) < abs(a2 - c2))
		printf("Точка б ближе %d\n", a2 - b2);
	else
		printf("Точка с ближе %d\n", a2 - c2);


	int x, y;
	printf("Введите кординаты точки(x и y):\n");
	scanf("%d %d", &x, &y);
	if ((x > 0) & (y > 0))
		printf("Точка лежит в 1-ой четверти\n");
	else if ((x < 0) & (y > 0))
		printf("Точка лежит во 2-ой четверти\n");
	else if ((x < 0) & (y < 0))
		printf("Точка лежит в 3-ей четверти\n");
	else
		printf("Точка лежит в 4-ой четверти\n");


	int a3;
	printf("Введите число:\n");
	scanf("%d", &a3);
	if (a3 == 0)
		printf("Нулевое число\n");
	else {
		if (a3 > 0) printf("Положительное ");
		else printf("Отрицательное ");
		if ((a3 % 2) == 0) printf("чётное число\n");
		else printf("нечётное число\n");
	}


	int a4;
	printf("Введите число:\n");
	scanf("%d", &a4);
	if ((a4 % 2) == 0)
		printf("Чётное ");
	else
		printf("Нечётное ");
	if (a4 > 99)
		printf("трёхзначное число\n");
	else if
		((99 >= a4) & (a4 > 9)) printf("двухзначное число\n");
	else if 
		(a4 <= 9)  printf("однозначное число\n");
}