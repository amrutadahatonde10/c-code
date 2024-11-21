#include<stdio.h>

int main() {
    int N, i = 0;

    printf("Enter the size of the array (N): ");
    scanf("%d", &N);

    int source[N], destination[N];

    printf("Enter %d integers for the source array:\n", N);
    for (int j = 0; j < N; j++) {
        printf("Element %d: ", j + 1);
        scanf("%d", &source[j]);
    }

    do {
        destination[i] = source[i];
        i++;
    } while (i < N);

    printf("\nElements of the destination array are:\n");
    for (int j = 0; j < N; j++) {
        printf("%d ", destination[j]);
    }

    return 0;
}

//copy the elements of an array of N (=5) integers into another using a do...while loop.Accept N from user.

