#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int a;
	printf("Введите размер файла в байтах:\n");
	scanf("%d", &a);
	int ka = a / 1024;
	printf("В килобайтах:%d\n", ka);


	int a1, b1;
	printf("Введите длины отрезков A и B (A > B):\n");
	scanf("%d\n%d", &a1, &b1);
	div_t dl;
	dl = div(a1, b1);
	printf("Отрезок а содержит b отрезков:%d\n", dl);


	int a2, b2;
	printf("Введите длины отрезков A и B (A > B):\n");
	scanf("%d\n%d", &a2, &b2);
	int ost = fmod(a2, b2);
	printf("Остаток на отрезке а :%d\n", ost);


	int a3;
	printf("Ввежите двухзначное число:\n");
	scanf("%d", &a3);
	int rez = (a3 / 10) + (a3 % 10) * 10;
	printf("Результат:%d\n", rez );


	int a4;
	printf("Введите трёхзначное число:\n");
	scanf("%d", &a4);
	int civ1 = a4 / 100;
	int rez1 = ((a4 % 100) * 10) + civ1;
	printf("Результат:%d\n", rez1);
}
