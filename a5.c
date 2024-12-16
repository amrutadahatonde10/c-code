#include<stdio.h>
int main()
{
    int a=5;
    int b=10;
    int c;
    printf("a=%d,b=%d,c=%d",a,b,c);
    c=b;
    b=a;
    a=c;
    printf("a=%d,b=%d,c=%d",a,b,c);
    return 0;
}

//swap two numbers using a third variable.
