#include<stdio.h>
int main()
{
    float a,b,perimeter;

    printf("Enter side a:");
    scanf("%f",&a);
    printf("Enter side b:");
    scanf("%f",&b);

    perimeter = 2 * (a + b);

    printf("Perimeter is:%.2f\n",perimeter);

    return 0;
}

//write a program to calculate perimeter of rectangle.Take sides a,b from the user.