#include<stdio.h>
int main() {
    int i;

    printf("Number\tsquare\tcube\n");

    for (i = 0; i < 10; i++){
        printf("%d\t%d\t%d\n", i , i * i , i * i * i);
    }
    return 0;
}

//write  a c program to print the table of squares and cubes.