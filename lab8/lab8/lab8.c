#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int a;
	printf("������� ������ ����� � ������:\n");
	scanf("%d", &a);
	int ka = a / 1024;
	printf("� ����������:%d\n", ka);


	int a1, b1;
	printf("������� ����� �������� A � B (A > B):\n");
	scanf("%d\n%d", &a1, &b1);
	div_t dl;
	dl = div(a1, b1);
	printf("������� � �������� b ��������:%d\n", dl);


	int a2, b2;
	printf("������� ����� �������� A � B (A > B):\n");
	scanf("%d\n%d", &a2, &b2);
	int ost = fmod(a2, b2);
	printf("������� �� ������� � :%d\n", ost);


	int a3;
	printf("������� ����������� �����:\n");
	scanf("%d", &a3);
	int rez = (a3 / 10) + (a3 % 10) * 10;
	printf("���������:%d\n", rez );


	int a4;
	printf("������� ���������� �����:\n");
	scanf("%d", &a4);
	int civ1 = a4 / 100;
	int rez1 = ((a4 % 100) * 10) + civ1;
	printf("���������:%d\n", rez1);
}
