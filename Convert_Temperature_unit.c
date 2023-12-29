#include<stdio.h>
#include<conio.h>
int main()
{
    float c,f;
    printf("It is a program to convert temperature, celsius to fahrenheit.\n");
    printf("Enter the temperature in celsius: \n ");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("%f celsius= %f fahrenheit",c,f);
    return 0;
}