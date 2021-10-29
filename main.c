/*
   PROJECT:  CALCULATOR
   AUTHOR:   ELIZABETH  AKINYI ODHIAMBO
   DATE:     29 OCTOBER 2021
   COMPILER: GNC GCC
   LANGUAGE: C99
   LICENSE:  MIT
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value, result, add, mult, sub, div;
    result = 0;
    printf("%d\n", result);

    printf("add ");
    scanf("%d", &value);
    result = result + value;
    printf("%d\n", result);

    printf("mult ");
    scanf("%d", &value);
    result = result * value;
    printf("%d\n", result);

    printf("sub ");
    scanf("%d", &value);
    result = result - value;
    printf("%d\n", result);

    printf("div ");
    scanf("%d", &value);
    result = result/value;
    printf("%d", result);

    return 0;
}
