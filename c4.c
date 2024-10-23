#include<stdio.h>
int main()
{
    int numbers[10];
    int sum = 0;
    
    printf("Enter 10 integers:");

    for (int i = 0; i < 10; i++) 
    {
        printf("Integer is: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i]; 
    }

    printf("The sum of the entered integers is: %d\n", sum);

    return 0;
}

//write a program to input N (=10) integers into an array and find their sum using a for loop.