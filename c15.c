#include<stdio.h>
int main()
{
    int n;

    printf("Enter the number of elements:");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Array in reverse order:\n");
    int i = n - 1;
    while (i >= 0) {
        printf("%d", arr[i]);
        i--;
    }
    printf("\n");

    return 0;
}

//input (n=5) integers into an array and display the array in reverse order using a while loop. Accept N from user