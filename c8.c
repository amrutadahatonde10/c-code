#include <stdio.h>

int main() {
    int number;
    float result;
 
    printf("Enter a number (10, 20, 30, or 40): ");
    scanf("%d", &number);

    switch (number) {
        case 10:
            result = number / 2.0; 
            printf("Result: %.2f\n", result);
            break;
        case 20:
            result = number / 3.0;
            printf("Result: %.2f\n", result);
            break;
        case 30:
            result = number / 4.0; 
            printf("Result: %.2f\n", result);
            break;
        case 40:
            result = number / 5.0;
            printf("Result: %.2f\n", result);
            break;
        default:
            printf("Invalid input. Please enter 10, 20, 30, or 40.\n");
            break;
    }

    return 0;
}

//read, a number if equal to 10 divide it by 2, if the number if equal to 20 divide it by 3, if the number is equal 
//to 30 divide it by 4if the number if equal to 40 divide it by 5. Make use of a switch.