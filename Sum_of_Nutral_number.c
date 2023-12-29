#include<stdio.h>
#include<conio.h>
int main()
{
 int sum, n;
printf("Program to find out sum of natural number. \n");
printf("Enter the number of terms of natural number:\n ");
scanf("%d",&n);
sum=(n*(n+1))/2;
printf("The sum of %d natural number is %d.",n,sum);
return 0;
}