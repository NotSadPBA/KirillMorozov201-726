#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    int a, b;
    printf("������� ����� ������������� ����� A:");
    scanf("%d", &a);
    printf("������� ����� ������������� ����� B:");
    scanf("%d", &b);
    int i, d;
    for (i = a; i <= b; ++i) {
        for (d = 1; d <= i; ++d)
            printf("%d \n", i);
    }


    int a1, b1;
    printf("������� ����� ������������� ����� A:");
    scanf("%d", &a1);
    printf("������� ����� ������������� ����� B:");
    scanf("%d", &b1);
    int temp = a1;
    while (temp >= 0) {
        temp -= b1;
    }
    printf("����� ��������� ����� ������� A:%d\n ", temp + b1);


    int n;
    printf("������� ����� ����� N(>1):");
    scanf("%d", &n);
    int k = 0, temp1 = 0;
    while (temp1 < n) {
        ++k;
        temp1 += 3;
    }
    printf("���������� K: %d\n �����:%d\n", k, temp1);


    double p;
    printf("������� �������� P:");
    scanf("%lf", &p);
    int k1 = 1;
    double s = 1000;
    while (s <= 1100) {
        ++k1;
        s += s * p / 100;
    }
    printf("���-�� ������� ����� �������� 1100 ��� (K): %d\n�������� ������ ������ (S): %lf\n", k1, s);


    int a2, b2;
    printf("������� ����� ������������� ����� A:");
    scanf("%d", &a2);
    printf("������� ����� ������������� ����� B:");
    scanf("%d", &b2);
    while ((a2 != 0) & (b2 != 0)) {
        if (a2 > b2) a2 = a2 % b2;
        else b2 = b2 % a2;
    }
    printf("��� = %d\n", a2 + b2);


    int n2;
    printf("������� ����� ����� N (>1):");
    scanf("%d", &n2);
    int f1 = 1, f2 = 1, f = 0, k2 = 2;
    while (f < n) {
        ++k2;
        f = f2 + f1;
        f2 = f1;
        f1 = f;
    }
    printf("���������� ����� ����� �������� (K):%d\n", k2);
}
