#include<stdio.h>
int main()
{
    int N;

    printf("Enter the number of elements in the array:");
    scanf("%d", &N);

    int arr[N];

    printf("Enter %d integers: \n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];

    for (int i = 1; i < N; i++){
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The maximum value in the array is: %d\n", max);
    return 0;
}

//write a c program to find the maximum value in an array of size N integers using a for loop .