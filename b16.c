#include<stdio.h>
int main()
{
    int a, b, c, result;

    printf("Enter the three integers:");
    scanf("%d%d%d",&a, &b, &c);

    result=a*a+b*b;

    if(result==c*c)
    printf("can form pythagorean triplet");
    else
    printf("cannot form triplet");
    return 0;
}

//write a program that accepts three integers and checks whether they form a pythagorean triplet.