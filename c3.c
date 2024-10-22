#include <stdio.h>

int main() {
    int N, i = 1;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Odd numbers from 1 to %d are:\n", N);
    
    while (i <= N) {
        if (i % 2 != 0) { 
            printf("%d ", i);
        }
        i++; 
    }

    printf("\n");
    return 0;
}
//print odd numbers from 1 to N using while loop
