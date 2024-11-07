#include <stdio.h>

int main() {
    int num, i = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Multiplication table for %d:\n", num);
    
    while (i <= 10) {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;  
    }

    return 0;
}


//Read a number from the user and generate a multiplication table using while loop