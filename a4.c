#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the 1st integer: ");
    scanf("%d" ,&num1);
    printf("Enter the 2nd integer: ");
    scanf("%d" ,&num2);
    printf("Add: %d\n" , num1 + num2);
    printf("Sub: %d\n" , num1 - num2);
    printf("Mult: %d\n" , num1 * num2);

    return 0;
}

//Read two integers from the user and print their addition, subtraction and multiplication.