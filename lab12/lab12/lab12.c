#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    int a, b;
    printf("������� ����� ��� � ������:\n");
    scanf("%d %d", &a, &b);
    switch (a) {
    case 1:
        printf("������ ");
        break;
    case 2:
        printf("������ ");
        break;
    case 3:
        printf("������ ");
        break;
    case 4:
        printf("�������� ");
        break;
    case 5:
        printf("����� ");
        break;
    case 6:
        printf("������ ");
        break;
    case 7:
        printf("������� ");
        break;
    case 8:
        printf("������� ");
        break;
    case 9:
        printf("������� ");
        break;
    case 10:
        printf("������� ");
        break;
    case 11:
        printf("�����������  ");
        break;
    case 12:
        printf("����������� ");
        break;
    case 13:
        printf("����������� ");
        break;
    case 14:
        printf("������������� ");
        break;
    case 15:
        printf("����������� ");
        break;
    case 16:
        printf("����������� ");
        break;
    case 17:
        printf("����������� ");
        break;
    case 18:
        printf("������������� ");
        break;
    case 19:
        printf("������������� ");
        break;
    case 20:
        printf("��������� ");
        break;
    case 21:
        printf("�������� ������ ");
        break;
    case 22:
        printf("�������� ������ ");
        break;
    case 23:
        printf("�������� ������ ");
        break;
    case 24:
        printf("�������� �������� ");
        break;
    case 25:
        printf("�������� ����� ");
        break;
    case 26:
        printf("�������� ������ ");
        break;
    case 27:
        printf("�������� ������� ");
        break;
    case 28:
        printf("�������� ������� ");
        break;
    case 29:
        printf("�������� ������� ");
        break;
    case 30:
        printf("��������� ");
        break;
    case 31:
        printf("�������� ������ ");
        break;
    }

    switch (b) {
    case 1:
        printf("������ \n");
        break;
    case 2:
        printf("������� \n");
        break;
    case 3:
        printf("����� \n");
        break;
    case 4:
        printf("������ \n");
        break;
    case 5:
        printf("��� \n");
        break;
    case 6:
        printf("���� \n");
        break;
    case 7:
        printf("���� \n");
        break;
    case 8:
        printf("������� \n");
        break;
    case 9:
        printf("�������� \n");
        break;
    case 10:
        printf("������� \n");
        break;
    case 11:
        printf("������  \n");
        break;
    case 12:
        printf("�������  \n");
        break;
    }

    int a1;
    char n;
    printf("������� ����������� � �������:");
    scanf(" %c %d", &n, &a1);
    switch (n) {
    case '�':
        switch (a1) {
        case 1:
            n = '�';
            break;
        case 0:
            n = '�';
            break;
        case -1:
            n = '�';
            break;
        }
        break;
    case '�':
        switch (a1) {
        case 1:
            n = '�';
            break;
        case 0:
            n = '�';
            break;
        case -1:
            n = '�';
            break;
        }
    case '�':
        switch (a1) {
        case 1:
            n = '�';
            break;
        case 0:
            n = '�';
            break;
        case -1:
            n = '�';
            break;
        }
        break;
    case '�':
        switch (a1) {
        case 1:
            n = '�';
            break;
        case 0:
            n = '�';
            break;
        case -1:
            n = '�';
            break;
        }
    }
    printf("������ ������������: %c\n", n);


    int kol;
    printf("������� ����� ������������ ���������� ������� ������� �� ��������� ���� :");
    scanf("%d", &kol);
    if (kol / 10 == 1)
        switch (kol) {
        case 10:
            printf("������ ������� �������. \n");
            break;
        case 11:
            printf("���������� ������� �������. \n");
            break;
        case 12:
            printf("���������� ������� �������. \n");
            break;
        case 13:
            printf("���������� ������� �������. \n");
            break;
        case 14:
            printf("������������ ������� �������. \n");
            break;
        case 15:
            printf("���������� ������� �������. \n");
            break;
        case 16:
            printf("����������� ������� �������. \n");
            break;
        case 17:
            printf("���������� ������� �������. \n");
            break;
        case 18:
            printf("������������ ������� �������. \n");
            break;
        case 19:
            printf("������������ ������� �������. \n");
            break;
        }
    else {
        switch (kol / 10) {
        case 2:
            printf("�������� ");
            break;
        case 3:
            printf("�������� ");
            break;
        case 4:
            printf("����� ");
            break;
        }
        switch (kol % 10) {
        case 1:
            printf("���� ������� �������\n");
            break;
        case 2:
            printf("��� ������� �������\n");
            break;
        case 3:
            printf("��� ������� �������\n");
            break;
        case 4:
            printf("������ ������� �������\n");
            break;
        case 5:
            printf("���� ������� �������\n");
            break;
        case 6:
            printf("����� ������� �������\n");
            break;
        case 7:
            printf("���� ������� �������\n");
            break;
        case 8:
            printf("������ ������� �������\n");
            break;
        case 9:
            printf("������ ������� �������\n");
            break;
        }
    }


    int a2;
    printf("������� ����� ����� � ��������� 100�999:");
    scanf("%d", &a2);
    switch (a2 / 100) {
    case 1:
        printf("C�� ");
        break;
    case 2:
        printf("������ ");
        break;
    case 3:
        printf("������ ");
        break;
    case 4:
        printf("��������� ");
        break;
    case 5:
        printf("������� ");
        break;
    case 6:
        printf("�������� ");
        break;
    case 7:
        printf("������� ");
        break;
    case 8:
        printf("���������  ");
        break;
    case 9:
        printf("���������  ");
        break;
    }
    if ((a2 / 10) % 10 == 1)
        switch (a2 % 100) {
        case 10:
            printf("������\n");
            break;
        case 11:
            printf("����������\n");
            break;
        case 12:
            printf("����������\n");
            break;
        case 13:
            printf("����������\n");
            break;
        case 14:
            printf("������������\n");
            break;
        case 15:
            printf("����������\n");
            break;
        case 16:
            printf("�����������\n");
            break;
        case 17:
            printf("����������\n");
            break;
        case 18:
            printf("������������\n");
            break;
        case 19:
            printf("������������\n");
            break;
        }
    else {
        switch ((a2 / 10) % 10) {
        case 2:
            printf("�������� ");
            break;
        case 3:
            printf("�������� ");
            break;
        case 4:
            printf("����� ");
            break;
        case 5:
            printf("��������� ");
            break;
        case 6:
            printf("���������� ");
            break;
        case 7:
            printf("��������� ");
            break;
        case 8:
            printf("����������� ");
            break;
        case 9:
            printf("��������� ");
            break;
        }

        switch (n % 10) {
        case 1:
            printf("����\n");
            break;
        case 2:
            printf("���\n");
            break;
        case 3:
            printf("���\n");
            break;
        case 4:
            printf("������\n");
            break;
        case 5:
            printf("����\n");
            break;
        case 6:
            printf("�����\n");
            break;
        case 7:
            printf("����\n");
            break;
        case 8:
            printf("������\n");
            break;
        case 9:
            printf("������\n");
            break;
        }
    }


    int a5;
    printf("������� ���:");
    scanf("%d", &a5);
    printf("��� ");
    switch ((a5) % 10) {
    case 0:
    case 1:
        printf("���");
        break;
    case 2:
    case 3:
        printf("����");
        break;
    case 4:
    case 5:
        printf("����");
        break;
    case 6:
    case 7:
        printf("�����");
        break;
    case 8:
    case 9:
        printf("���");
        break;
    }
    switch ((a5 + 1) % 5) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 9:
    case 10:
    case 11:
        printf("�� ");
        break;
    case 6:
    case 7:
    case 8:
        printf("��� ");
        break;
    }
    switch ((a5 + 8) % 12) {
    case 0:
        printf("�����\n");
        break;
    case 1:
        printf("������\n");
        break;
    case 2:
        printf("�����\n");
        break;
    case 3:
        printf("�����\n");
        break;
    case 4:
        printf("�������\n");
        break;
    case 5:
        printf("����\n");
        break;
    case 6:
        printf("������\n");
        break;
    case 7:
        printf("����\n");
        break;
    case 8:
        printf("��������\n");
        break;
    case 9:
        printf("������\n");
        break;
    case 10:
        printf("������\n");
        break;
    case 11:
        printf("������\n");
        break;
    }
}   