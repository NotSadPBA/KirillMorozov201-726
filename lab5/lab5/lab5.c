#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int x1, x2, y1, y2, a, b, c, au, bu, cu, x12, y12, x22, y22, x13, y13, x23, y23, x33, y33;
	printf("������� ���������� ����� ��������� ����� �������� �� ������ �����(x1 y1 x2 y2):\n");
	scanf("%d\n%d\n%d\n%d", &x1, &y1, &x2, &y2);
	printf("������� �������� ����� �� �������� ���(a, b, c):\n");
	scanf("%d\n%d\n%d", &a, &b, &c);
	printf("������� �������� ����� �� �������� ��� ��� ������������(au, bu, cu):\n");
	scanf("%d\n%d\n%d", &au, &bu, &cu);
	printf("������� ���������� ���� ��������������� ������ ��������������(x12 y12 x22 y22):\n");
	scanf("%d\n%d\n%d\n%d", &x12, &y12, &x22, &y22);
	printf("������� ���������� ���� ������ ������������(x13 y13 x23 y23 x33 y33):\n");
	scanf("%d\n%d\n%d\n%d", &x13, &y13, &x23, &y23, &x33, &y33);

	int rass = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
	int ac = abs(a - c);
	int bc = abs(b - c);
	int sumot = ac + bc;
	int proizot =(abs(au - cu) * abs(cu - bu));
	int perimetr = 2 * (abs(x12 - x22) + abs(y12 - y22));
	int ploshad = abs(x12 - x22) * abs(y12 - y22);
	int d1 = sqrt(((x23 - x13)*(x23 - x13)) + ((y23 - y13)*(y23 - y13)));
	int d2 = sqrt(((x33 - x23) * (x33 - x23)) + ((y33 - y23) * (y33 - y23)));
	int d3 = sqrt(((x13 - x33) * (x13 - x33)) + ((y13 - y33) * (y13 - y33)));
	int P = d1 + d2 + d3;
	int pp = P / 2;
	int S = sqrt(pp * (pp - d1) * (pp - d2) * (pp - d3));

	printf("���������� ����� �������:%d\n", rass);
	printf("����� �������� AC, BC � �� �����:\n%d\n%d\n%d\n", ac, bc, sumot);
	printf("������������ ���� �������� AC � BC\n", proizot);
	printf("�������� � ������� ��������������:\n%d\n%d\n", perimetr, ploshad);
	printf("�������� � ������� ������������:\n%d\n%d\n", P, S);
}