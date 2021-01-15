#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int a;
	printf("Введите кол-во прошедших секунд:\n");
	scanf("%d", &a);
	int ost = a % 60;
	printf("Количество секунд, прошедших с начала последней минуты:%d\n", ost);


	int k;
	printf("Введите k(1...365):\n");
	scanf("%d", &k);
	int den = k % 7;
	printf("k это %d день недели\n", den);


	int k1, n;
	printf("Введите k(1...365 и n):\n");
	scanf("%d\n%d", &k1, &n);
	int den1 = (k1 + n - 2) % 7 + 1;
	printf("k это %d день недели\n", den1);


	int a1, b1, c1;
	printf("Введите стороны прямоугольника и сторону квадрата:\n");
	scanf("%d\n%d\n%d", &a1, &b1, &c1);
	int s1 = a1 * b1;
	int s2 = c1 * c1;
	int s3 = s1 % s2;
	int kolvo = s1 / s2;
	printf("Площадь незанятой части и кол-во квадратов в прямоугольнике:%d\n%d\n", s3, kolvo);


	int y;
	printf("Введите год:");
	scanf("%d", &y);
	int nom = ((y - 1) / 100) + 1;
	printf("Номер столетия:%d\n", nom);
}