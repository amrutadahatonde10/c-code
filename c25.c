#include <stdio.h>

int main() {
    int N = 8;
    int arr[N];
    int isPalindrome = 1;
    
    printf("Enter %d integers:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < N / 2; i++) {
        if (arr[i] != arr[N - i - 1]) {
            isPalindrome = 0; 
            break;
        }
    }
    
    if (isPalindrome) {
        printf("The array is a palindrome.\n");
    } else {
        printf("The array is not a palindrome.\n");
    }
    
    return 0;
}

//write a c program input N(=8) integers and check if the array is palindrome (same backward and forward) using for loop 