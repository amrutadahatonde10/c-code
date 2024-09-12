#include<stdio.h>
int main()
{
    char str[100];

    printf("Enter a string (e.g.,Hello World): ");

    fgets(str, sizeof(str),stdin);

    printf("You entered : %s",str);

    return 0;
}

//Program to read the string “Hello World” using scanf and print it. (Does it work?)