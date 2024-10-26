#include <stdio.h>

int main() {
    int N, multiple = 3;

    printf("Enter a number (N): ");
    scanf("%d", &N);

    while (multiple <= N) {
        printf("%d\n", multiple);
        multiple += 3; 
    }

    return 0;
}

//Print Multiples of 3 up to N using while loop