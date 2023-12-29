#include<stdio.h>
#include<conio.h>
void main()
{
    int fact=1, i,term;
    printf("Programe to find out the factorial of the given number.\n");
    printf("Enter the number:");
    scanf("%d",&term);
    for(i=1;i<=term;i++)
        fact=fact*i;
        printf("The factorial is %d",fact);
    

}