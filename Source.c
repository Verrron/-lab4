#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>

int main() 
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int A, B, C, D;
    printf("Введите состояния датчиков A B C D (0 или 1):\n");
    scanf("%d %d %d %d", &A, &B, &C, &D);

    if (A + B + C + D >= 3) 
    {
        printf("Запись включена, замечены повторяющиеся движения\n");
    }
    else 
    {
        printf("Запись выключена, ложное срабатывание\n");
    }
  
}