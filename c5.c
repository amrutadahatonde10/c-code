#include <stdio.h>

int main() {
    int N, i = 1;

    printf("Enter a number N: ");
    scanf("%d", &N);

    while (i <= N) {
        int square = i * i; 
        printf("The square of %d is %d\n", i, square);
        i++;  
    }

    return 0;
}

//Print Squares of Numbers from 1 to N using while loop