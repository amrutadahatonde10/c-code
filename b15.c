#include<stdio.h>
int main()
{
    int num1, num2;

    printf("Enter the first number:");
    scanf("%d", &num1);

    printf("Enter the second number:");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("%d is greater than %d\n", num1, num2);
    }
    else if(num1 < num2){
        printf("%d is less than %d\n", num1, num2);
    }
    else{
        printf("%d is equal to %d\n", num1, num2);
    }
    return 0;
}

//write c program that reads two  numbers and prints whether the first number is greater than, less than, or equal to 
//the second using multiple if.....else statements.