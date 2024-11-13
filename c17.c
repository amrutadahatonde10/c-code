#include<stdio.h>
int main()
{
    int N = 10;
    int num, even_count = 0, odd_count = 0;

    printf("Enter %d integers:\n", N);

    for ( int i = 0; i < N; i++){
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);

        if (num % 2 == 0){
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("\nTotal even numbers: %d\n", even_count);
    printf("Total odd number: %d\n", odd_count);
    return 0;
}

//Input (N = 10) integers and count how many are even and odd using a for loop.