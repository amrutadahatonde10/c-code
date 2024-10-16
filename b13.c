#include<stdio.h>
int main()
{
    float base, height, area;

    printf("Enter the base of triangle:");
    scanf("%f",&base);
    printf("Enter the height og triangle:");
    scanf("%f",&height);

    area = 0.5 * base * height;

    printf("The area of the triangle is: %.2f\n",area);

    return 0;
}

//Area of triangle