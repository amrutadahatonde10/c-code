#include <stdio.h>

int main() {
    int x, y;
    long long result = 1; 

    printf("Enter the base (x): ");
    scanf("%d", &x);
    printf("Enter the exponent (y): ");
    scanf("%d", &y);

    int i = 0; 
    while (i < y) {
        result *= x; 
        i++; 
    }

    printf("%d raised to the power of %d is: %lld\n", x, y, result);

    return 0;
}

//Calculate the power of a number (i.e. x^y) using while loop