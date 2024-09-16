#include<stdio.h>
int main()
{
    int n,cube;
    
    printf("Enter a number:");
    scanf("%d",&n);

    cube = n * n * n;

    printf("The cube of %d is %d\n",n ,cube);

    return 0;
}

//Take a number(n) from user & output it's cube (n*n*n).