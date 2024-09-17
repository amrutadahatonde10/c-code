#include <stdio.h>
int main() {
    double r1, i1;

    printf("Enter the real part: ");
    scanf("%lf", &r1);
    
    printf("Enter the imaginary part: ");
    scanf("%lf", &i1);

    printf("The complex number is %.2f + %.2fi\n", r1, i1);
    return 0;
}


//read a complex number from user & print it.