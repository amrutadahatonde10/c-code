#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,r1,r2,discriminant;

    printf("Enter coefficient of x^2: ");
    scanf("%d", &a);
    printf("Enter coefficient of x: ");
    scanf("%d", &b);
    printf("Enter constants: ");
    scanf("%d", &c);
    if(a!=0)
    {
        printf("Quadratic equation is %dx^2 + %dx + %d ",a,b,c);
        discriminant=(b*b)-(4*a*c);
        r1=(-b-sqrt(discriminant))/2*a;
        r2=(-b-sqrt(discriminant))/2*a;

        printf("\n Roots of equation are \n root 1 = %d \t root 2 = %d", r1, r2);
    }
    return 0;
}

//Find the roots of a quadratic equation