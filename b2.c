#include<stdio.h>
int main(){
    int num[10];
    int sum = 0;

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++){
        printf("Integer %d: ", i + 1);
        scanf("%d" , &num[i]);
    }

    for (int i = 0; i < 10; i++){
        if (num[i] % 2 == 0) {
            sum += num[i];
        }
    }

    printf("The sum of even number is: %d\n", sum);

    return 0;
}

//Read 10 integers from the user and perform the addition of even numbers