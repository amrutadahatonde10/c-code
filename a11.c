#include<stdio.h>
int main()
{
    int integer;
    float floating_point;
    double double_precision;
    long double long_double_precision;
    char character;

    printf("Enter a integer: ");
    scanf("%d", &integer);

    printf("Enter a float: ");
    scanf("%f", &floating_point);

    printf("Enter a double: ");
    scanf("%lf", &double_precision);

    printf("Enter a long double: ");
    scanf("%Lf", &long_double_precision);

    printf("Enetr a character: ");
    scanf("%c", &character);

    printf("\nYou entered:\n");

    printf("Integer: %d\n",integer);
    printf("Float: %.2f\n",floating_point);
    printf("Double: %.2lf\n",double_precision);
    printf("Long Double: %.Lf\n",long_double_precision);
    printf("Character: %c\n",character);

    return 0;
}

//Program to read an integer, float, double, long double, a character from the
//user and print
