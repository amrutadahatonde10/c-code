#include <stdio.h>

int main() {
    int numbers[10]; 
    int sum = 0;     
    float average;   
    int i = 0;       

    printf("Enter 10 numbers:\n");
    while (i < 10) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i]; 
        i++; 
    }

    average = sum / 10.0; 
    
    printf("The average of the entered numbers is: %.2f\n", average);

    return 0;
}

//Calculate the average of 10 numbers using array and while loop
