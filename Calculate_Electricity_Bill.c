#include<stdio.h>
#include<conio.h>
int main()
{
    int unit;
    float Bill;
    printf("Program to calculate electricity bill.\n");
    printf("Enter the consumption unit:\n");
    scanf("%d",&unit);
    if(unit>=0 && unit<=200)
    {
      Bill= unit*0.50;
      printf("The Electricity bill is %f",Bill);
    }
    if(unit>=201 && unit<=400 )
    {
     Bill= ((unit-200)*0.65)+100;
      printf("The Electricity bill is %f", Bill);
    }
    if(unit>=401 && unit<=600)
    {
       Bill= ((unit-400)*0.80)+230;
      printf("The Electricity bill is %f" , Bill);
    }
    if(unit>600)
    {
       Bill=((unit-600)*1)+390;
      printf("The Electricity bill is %f", Bill);
    }

      return 0;

}