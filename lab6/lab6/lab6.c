#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b;
	printf("������� �������� a � b:");
	scanf("%d\n%d", &a, &b);
	int sod = b;
	b = a;
	a = sod;
	printf("����� �������� � � b: %d %d\n", a, b);


	int a1, b1, c1;
	printf("������� �������� a, b � c:");
	scanf("%d\n%d\n%d", &a1, &b1, &c1);
	int sod1 = b1;
	b1 = a1;
	a1 = c1;
	c1 = sod1;
	printf("����� �������� �, b � c:%d %d %d\n", a1, b1, c1);


	int a2, b2, c2;
	printf("������� �������� a, b � c:");
	scanf("%d\n%d\n%d", &a2, &b2, &c2);
	int sod2 = c2 ;
	c2 = a2;
	a2 = b2;
	b2 = sod2;
	printf("����� �������� �, b � c:%d %d %d\n", a2, b2, c2);


	int x, y;
	printf("������� x:");
	scanf("%d", &x);
	y = 3 * pow((x * pow(x, 2)), 2) - 6 * pow(x, 2) - 7;
	printf("y ����� %d", y);


	int x1, y1;
	printf("������� x:");
	scanf("%d", &x1);
	x1 = x1 - 3;
	x1 = x1 * pow(x1, 2);
	y1 = 4 * pow(x1, 2) - 7 * x1 + 2;
	printf("y1 ����� %d", y1);


	int ad;
	printf("������� a:");
	scanf("%d", &ad);
	int adkv = ad * ad;
	int adchet = adkv * adkv;
	int advos = adchet * adchet;
	printf("a^8 %d", advos);


	int add;
	printf("������� a:");
	scanf("%d", &add);
	int add2 = add * add;
	int add3 = add2 * add;
	int add5 = add3 * add2;
	int add10 = add5 * add5;
	int add15 = add10 * add5;
	printf("a^15 %d", add15);


}