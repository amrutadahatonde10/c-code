#include<stdio.h>
int main(){
    int rows = 5;

    for (int i = 0; i < rows; i++){
          for (int j = rows; j > i; j--){
            printf("*");
        }
        printf("\n");
    }  
    return 0;
}

// Write a c program to print this pattern using nested loop
// *****
// ****
// ***
// **
// *