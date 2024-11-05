#include <stdio.h>

int main() {
    int N, i, sum = 0;

    printf("Enter the number of integers: ");
    scanf("%d", &N);

    int numbers[N];

    printf("Enter %d integers:\n", N);
    for (i = 0; i < N; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i]; 
    }

    printf("The sum of the entered integers is: %d\n", sum);

    return 0;
}


//write a c program to input N(=10) integers into an array and find their sum using for loop . Accept N from user