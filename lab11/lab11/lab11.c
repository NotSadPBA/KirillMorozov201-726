#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b;
	printf("������� ��� ����������:\n");
	scanf("%d %d", &a, &b);
	if (a == b)
		printf("%d %d\n", a = 0, b = 0);
	else
		if (a > b)
			printf("%d %d\n", b = a, a);
		else
			printf("%d %d\n", a = b, b);


	int a1, b1, c1;
	printf("������� ��� �����:\n");
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
	printf("������� ��� �����:\n");
	scanf("%d %d %d", &a2, &b2, &c2);
	if (abs(a2 - b2) < abs(a2 - c2))
		printf("����� � ����� %d\n", a2 - b2);
	else
		printf("����� � ����� %d\n", a2 - c2);


	int x, y;
	printf("������� ��������� �����(x � y):\n");
	scanf("%d %d", &x, &y);
	if ((x > 0) & (y > 0))
		printf("����� ����� � 1-�� ��������\n");
	else if ((x < 0) & (y > 0))
		printf("����� ����� �� 2-�� ��������\n");
	else if ((x < 0) & (y < 0))
		printf("����� ����� � 3-�� ��������\n");
	else
		printf("����� ����� � 4-�� ��������\n");


	int a3;
	printf("������� �����:\n");
	scanf("%d", &a3);
	if (a3 == 0)
		printf("������� �����\n");
	else {
		if (a3 > 0) printf("������������� ");
		else printf("������������� ");
		if ((a3 % 2) == 0) printf("������ �����\n");
		else printf("�������� �����\n");
	}


	int a4;
	printf("������� �����:\n");
	scanf("%d", &a4);
	if ((a4 % 2) == 0)
		printf("׸���� ");
	else
		printf("�������� ");
	if (a4 > 99)
		printf("���������� �����\n");
	else if
		((99 >= a4) & (a4 > 9)) printf("����������� �����\n");
	else if 
		(a4 <= 9)  printf("����������� �����\n");
}