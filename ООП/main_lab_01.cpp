#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
#include "money.h" 

int main() {
    SetConsoleOutputCP(1251);
    FILE* file = fopen("input.txt", "r");
    if (!file) {
        printf("Помилка: Файл input.txt не знайдено!\n");
        return 1;
    }

    Money totalSum = { 0, 0 };
    int g, k, count;

    while (fscanf(file, "%d %d %d", &g, &k, &count) != EOF) {
        if (count < 0) {
            printf("Помилка: Кількість товару не може бути від'ємною. Пропускаємо запис.\n", count);
            continue; 
        }

        Money price = { g, (short int)k }; 
        Money subTotal = multiply(price, count);
        totalSum = add(totalSum, subTotal); 
    }
    fclose(file);

    Money finalPay = zaokruhlenya(totalSum);

    printf("========= ЧЕК =========\n");
    printMoney("Нараховано        ", totalSum);
    printMoney("До сплати (заок.) ", finalPay);
    printf("-----------------------\n");

    return 0;
}