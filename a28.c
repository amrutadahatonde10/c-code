#include <stdio.h>
int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d, %d", t1, t2);

    int count = 2; 
    while (count < n) {
        nextTerm = t1 + t2;
        printf(", %d", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        count++;
    }
    printf("\n");
    return 0;
}

//write a program to print Fibonacci sequence up to a specified number.
