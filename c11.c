#include<stdio.h>
int main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in celsius:");
    scanf("%f", &celsius);

    fahrenheit = (9.0 / 5.0) * celsius + 32;

    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, fahrenheit);
    return 0;
}

//write a program that reads a temperature in celsius and converts it to fahrenheit using the formula F=9/5*C+32.