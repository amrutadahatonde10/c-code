#include<stdio.h>
int main()
{
   float a,b;

   printf("Enter value of a:");
   scanf("%f",&a);

   printf("Enter value of b:");
   scanf("%f",&b);

   if(a==b){
    printf("equal\n");
   } 
   else{
    printf("not equal\n");
   }

   return 0;
}

//write a program that reads two floting-point number from the user. If both the numbers are equal print "Equal"
//otherwise print "Not Equal".