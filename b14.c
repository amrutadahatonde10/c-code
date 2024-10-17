#include<stdio.h>
int main()
{
    int i, j, k;

    printf("Enter three integers:");
    scanf("%d %d %d",&i,&j,&k);

    if(i+j>k&&i+k>j&&j+k>i)
        printf("can form side of triangle:");
    else
        printf("cannot form side of triangle:");
    return 0;
}

//write a program that takes three integers and determines whether they can form the side of triangle using the
//triangle inequality condition.