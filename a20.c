#include<stdio.h>
int main(){
    int marks;
    printf("Enter the marks: ");
    scanf("%d", &marks);
    if(marks >= 0 && marks <= 35){ 
        printf("Fail \n");
    } 
    else if(marks > 35 && marks <= 100){
        printf("Pass \n");
    } 
    else {
        printf("Wrong Marks");
    }
    return 0;
}

//write a program to check if a student passed or failed.

