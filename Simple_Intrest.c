#include<stdio.h>
#include<conio.h>
 int main()
 {
    int p;
    float r,t,si;
    printf("It is a program to calculate Simple Intrest.\n");
    printf("Enter the principal\n");
    scanf("%d", &p);
    printf("enter the Time duration.\n");
    scanf("%f",&t);
    printf("Enter the rate\n");
    scanf("%f",&r);
    si=(p*r*t)/100;
    printf("The simple intrest of given data is %f",si);
    return 0;


 }