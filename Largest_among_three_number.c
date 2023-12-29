#include<stdio.h>
#include<conio.h>
int main()
{
    float num1,num2,num3;
    num1=num2=num3=0;
    printf("It is a program to find out the largest among the three numbe.\n");
    printf("Enter the first number : \n");
    scanf("%f", &num1);
    printf("Enter the second number: \n");
    scanf("%f", &num2);
    printf("Enter the third number: \n");
    scanf("%f", &num3); 
    if(num1>num2)
        if(num1>num3)
        printf("The largest number is %f", num1);
        else
        printf("The largest number is %f", num3);
    else
        if(num2>num3)
        printf("The largest number is %f", num2);
        else
        printf("The largest number is %f", num3);

        return 0;
    }
