#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, di, pi = 3.14, a1, a2, b1, b2;
	printf ("������� ������� ��������������:\n");
	scanf ("%d\n%d", &a, &b);
	int s = a * b;
	int p = (a + b) * 2;
	printf("������� ������� ����������:\n");
	scanf("%d", &di);
	int l = pi * di;
	printf("������� ��� ��������� �����:\n");
	scanf("%d\n%d", &a1, &b1);
	int sum1 = a1 + b1;
	int raz1 = a1 - b1;
	int proiz1 = a1 * b1;
	int del1 = (a1 * a1) / (b1 * b1);
	printf("������� ��� ��� ��� ��������� �����:\n");
	scanf("%d\n%d", &a2, &b2);
	int sum2 = a2 + b2;
	int raz2 = a2 - b2;
	int proiz2 = a2 * b2;
	int del2 = (fabs(a2) * fabs(a2)) / (fabs(b2) * fabs(b2));
	printf("������� �������������� � ��� �������� �����:%d %d\n", s, p);
	printf("����� ���������� �����:%d\n", l);
	printf("C����, ��������, ������������ � ������� �� ���������:%d %d %d %d\n", sum1, raz1, proiz1, del1);
	printf("C����, ��������, ������������ � ������� �� ������� ������ ����� :%d %d %d %d\n", sum2, raz2, proiz2, del2);
}