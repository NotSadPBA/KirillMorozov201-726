#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int a;
	printf("������� ���-�� ��������� ������:\n");
	scanf("%d", &a);
	int ost = a % 60;
	printf("���������� ������, ��������� � ������ ��������� ������:%d\n", ost);


	int k;
	printf("������� k(1...365):\n");
	scanf("%d", &k);
	int den = k % 7;
	printf("k ��� %d ���� ������\n", den);


	int k1, n;
	printf("������� k(1...365 � n):\n");
	scanf("%d\n%d", &k1, &n);
	int den1 = (k1 + n - 2) % 7 + 1;
	printf("k ��� %d ���� ������\n", den1);


	int a1, b1, c1;
	printf("������� ������� �������������� � ������� ��������:\n");
	scanf("%d\n%d\n%d", &a1, &b1, &c1);
	int s1 = a1 * b1;
	int s2 = c1 * c1;
	int s3 = s1 % s2;
	int kolvo = s1 / s2;
	printf("������� ��������� ����� � ���-�� ��������� � ��������������:%d\n%d\n", s3, kolvo);


	int y;
	printf("������� ���:");
	scanf("%d", &y);
	int nom = ((y - 1) / 100) + 1;
	printf("����� ��������:%d\n", nom);
}