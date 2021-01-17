#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    int a, b;
    printf("Введите номер дня и месяца:\n");
    scanf("%d %d", &a, &b);
    switch (a) {
    case 1:
        printf("Первое ");
        break;
    case 2:
        printf("Второе ");
        break;
    case 3:
        printf("Третье ");
        break;
    case 4:
        printf("Четвёртое ");
        break;
    case 5:
        printf("Пятое ");
        break;
    case 6:
        printf("Шестое ");
        break;
    case 7:
        printf("Седьмое ");
        break;
    case 8:
        printf("Восьмое ");
        break;
    case 9:
        printf("Девятое ");
        break;
    case 10:
        printf("Десятое ");
        break;
    case 11:
        printf("Одинадцатое  ");
        break;
    case 12:
        printf("Двенадцатое ");
        break;
    case 13:
        printf("Тринадцатое ");
        break;
    case 14:
        printf("Четырнадцатое ");
        break;
    case 15:
        printf("Пятнадцатое ");
        break;
    case 16:
        printf("Шеснадцатое ");
        break;
    case 17:
        printf("Семнадцатое ");
        break;
    case 18:
        printf("Восемнадцатое ");
        break;
    case 19:
        printf("Девятнадцатое ");
        break;
    case 20:
        printf("Двадцатое ");
        break;
    case 21:
        printf("Двадцать первое ");
        break;
    case 22:
        printf("Двадцать второе ");
        break;
    case 23:
        printf("Двадцать третье ");
        break;
    case 24:
        printf("Двадцать четвёртое ");
        break;
    case 25:
        printf("Двадцать пятое ");
        break;
    case 26:
        printf("Двадцать шестое ");
        break;
    case 27:
        printf("Двадцать седьмое ");
        break;
    case 28:
        printf("Двадцать восьмое ");
        break;
    case 29:
        printf("Двадцать девятое ");
        break;
    case 30:
        printf("Тридцатое ");
        break;
    case 31:
        printf("Тридцать первое ");
        break;
    }

    switch (b) {
    case 1:
        printf("января \n");
        break;
    case 2:
        printf("февраля \n");
        break;
    case 3:
        printf("марта \n");
        break;
    case 4:
        printf("апреля \n");
        break;
    case 5:
        printf("мая \n");
        break;
    case 6:
        printf("июня \n");
        break;
    case 7:
        printf("июля \n");
        break;
    case 8:
        printf("августа \n");
        break;
    case 9:
        printf("сентября \n");
        break;
    case 10:
        printf("октября \n");
        break;
    case 11:
        printf("ноября  \n");
        break;
    case 12:
        printf("декабря  \n");
        break;
    }

    int a1;
    char n;
    printf("Введите направление и команду:");
    scanf(" %c %d", &n, &a1);
    switch (n) {
    case 'С':
        switch (a1) {
        case 1:
            n = 'З';
            break;
        case 0:
            n = 'С';
            break;
        case -1:
            n = 'В';
            break;
        }
        break;
    case 'В':
        switch (a1) {
        case 1:
            n = 'С';
            break;
        case 0:
            n = 'В';
            break;
        case -1:
            n = 'Ю';
            break;
        }
    case 'Ю':
        switch (a1) {
        case 1:
            n = 'В';
            break;
        case 0:
            n = 'Ю';
            break;
        case -1:
            n = 'З';
            break;
        }
        break;
    case 'З':
        switch (a1) {
        case 1:
            n = 'Ю';
            break;
        case 0:
            n = 'З';
            break;
        case -1:
            n = 'С';
            break;
        }
    }
    printf("Теперь навправоение: %c\n", n);


    int kol;
    printf("Введите число определяющее количество учебных заданий по некоторой теме :");
    scanf("%d", &kol);
    if (kol / 10 == 1)
        switch (kol) {
        case 10:
            printf("Десять учебных заданий. \n");
            break;
        case 11:
            printf("Одинадцать учебных заданий. \n");
            break;
        case 12:
            printf("Двенадцать учебных заданий. \n");
            break;
        case 13:
            printf("Тринадцать учебных заданий. \n");
            break;
        case 14:
            printf("Четырнадцать учебных заданий. \n");
            break;
        case 15:
            printf("Пятнадцать учебных заданий. \n");
            break;
        case 16:
            printf("Шестнадцать учебных заданий. \n");
            break;
        case 17:
            printf("Семнадцать учебных заданий. \n");
            break;
        case 18:
            printf("Восемнадцать учебных заданий. \n");
            break;
        case 19:
            printf("Девятнадцать учебных заданий. \n");
            break;
        }
    else {
        switch (kol / 10) {
        case 2:
            printf("Двадцать ");
            break;
        case 3:
            printf("Тридцать ");
            break;
        case 4:
            printf("Сорок ");
            break;
        }
        switch (kol % 10) {
        case 1:
            printf("одно учебное задание\n");
            break;
        case 2:
            printf("два учебных задания\n");
            break;
        case 3:
            printf("три учебных задания\n");
            break;
        case 4:
            printf("четыре учебных задания\n");
            break;
        case 5:
            printf("пять учебных заданий\n");
            break;
        case 6:
            printf("шесть учебных заданий\n");
            break;
        case 7:
            printf("семь учебных заданий\n");
            break;
        case 8:
            printf("восемь учебных заданий\n");
            break;
        case 9:
            printf("девять учебных заданий\n");
            break;
        }
    }


    int a2;
    printf("Введите целое число в диапазоне 100–999:");
    scanf("%d", &a2);
    switch (a2 / 100) {
    case 1:
        printf("Cто ");
        break;
    case 2:
        printf("Двести ");
        break;
    case 3:
        printf("Триста ");
        break;
    case 4:
        printf("Четыреста ");
        break;
    case 5:
        printf("Пятьсот ");
        break;
    case 6:
        printf("Шестьсот ");
        break;
    case 7:
        printf("Семьсот ");
        break;
    case 8:
        printf("Восемьсот  ");
        break;
    case 9:
        printf("Девятьсот  ");
        break;
    }
    if ((a2 / 10) % 10 == 1)
        switch (a2 % 100) {
        case 10:
            printf("десять\n");
            break;
        case 11:
            printf("одинадцать\n");
            break;
        case 12:
            printf("двенадцать\n");
            break;
        case 13:
            printf("тринадцать\n");
            break;
        case 14:
            printf("четырнадцать\n");
            break;
        case 15:
            printf("пятнадцать\n");
            break;
        case 16:
            printf("шестнадцать\n");
            break;
        case 17:
            printf("семнадцать\n");
            break;
        case 18:
            printf("восемнадцать\n");
            break;
        case 19:
            printf("девятнадцать\n");
            break;
        }
    else {
        switch ((a2 / 10) % 10) {
        case 2:
            printf("двадцать ");
            break;
        case 3:
            printf("тридцать ");
            break;
        case 4:
            printf("сорок ");
            break;
        case 5:
            printf("пятьдесят ");
            break;
        case 6:
            printf("шестьдесят ");
            break;
        case 7:
            printf("семьдесят ");
            break;
        case 8:
            printf("восемьдесят ");
            break;
        case 9:
            printf("девяносто ");
            break;
        }

        switch (n % 10) {
        case 1:
            printf("один\n");
            break;
        case 2:
            printf("два\n");
            break;
        case 3:
            printf("три\n");
            break;
        case 4:
            printf("четыре\n");
            break;
        case 5:
            printf("пять\n");
            break;
        case 6:
            printf("шесть\n");
            break;
        case 7:
            printf("семь\n");
            break;
        case 8:
            printf("восемь\n");
            break;
        case 9:
            printf("девять\n");
            break;
        }
    }


    int a5;
    printf("Введите год:");
    scanf("%d", &a5);
    printf("Год ");
    switch ((a5) % 10) {
    case 0:
    case 1:
        printf("бел");
        break;
    case 2:
    case 3:
        printf("черн");
        break;
    case 4:
    case 5:
        printf("зелён");
        break;
    case 6:
    case 7:
        printf("красн");
        break;
    case 8:
    case 9:
        printf("жёлт");
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
        printf("ой ");
        break;
    case 6:
    case 7:
    case 8:
        printf("ого ");
        break;
    }
    switch ((a5 + 8) % 12) {
    case 0:
        printf("крысы\n");
        break;
    case 1:
        printf("коровы\n");
        break;
    case 2:
        printf("тигра\n");
        break;
    case 3:
        printf("зайца\n");
        break;
    case 4:
        printf("дракона\n");
        break;
    case 5:
        printf("змеи\n");
        break;
    case 6:
        printf("лошади\n");
        break;
    case 7:
        printf("овцы\n");
        break;
    case 8:
        printf("обезьяны\n");
        break;
    case 9:
        printf("курицы\n");
        break;
    case 10:
        printf("собаки\n");
        break;
    case 11:
        printf("свиньи\n");
        break;
    }
}   