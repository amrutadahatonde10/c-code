#include<stdio.h>
int main()
{
    int numbers[10];
    int positiveCount = 0, negativeCount = 0;

    printf("Enter 10 integers:\n");

    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        if (numbers[i] > 0) {
            positiveCount++;
        } else if (numbers[i] < 0) {
            negativeCount++;
        }
    }

    printf("\nNumber of positive integers: %d\n", positiveCount);
    printf("Number of negative integers: %d\n", negativeCount);

    return 0; 
}

//Input (N = 10) integers and count how many are positive and negative using a for loop.