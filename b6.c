#include<stdio.h>
int main(){
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++){
        if (i % 2 != 0){
            sum += i;
        }
    }
    printf("The sum of odd numbers up to %d is: %d\n", num, sum);

    return 0;
}

//write a c program to calculate the sum of odd numbers up to N