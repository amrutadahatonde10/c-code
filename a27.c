#include<stdio.h>
int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num > 0){
        printf("%d is a natural number. \n", num);
    }else{
        printf("%d is not a natural number. \n", num);
    }

    return 0;
}

//write a program to check if the given number is a natural number.