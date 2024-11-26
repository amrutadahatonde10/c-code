#include<stdio.h>
int main()
{
    int N, sum = 0;

    printf("Enter the number of elements in the array:");
    scanf("%d", &N);

    if(N <= 0) {
        printf("N must be greater than 0.\n");
        return 1;
    }

    int arr[N];

    printf("Enter %d elements of the array:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i < N; i += 2) {
        sum += arr[i];
    }

    printf("The sum of elements at odd indices is: %d\n", sum);

    return 0;
}

//create program that sums the elements located at odd indices of an array of (N=10)integers using a forloop.