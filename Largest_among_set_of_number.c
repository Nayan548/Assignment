#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    float n[10], largest,smallest;
    largest=0;
    smallest=0;
    printf("It is a programe to find out largest and smallest number in the set of number.\n");
    printf("Enter the set of number: \n ");
    for(i=0;i<10;i++)
     {
      printf("Enter the %d number.\n",i+1);
      scanf("%f", &n[i]);
     }

    for(i=0;i<10;i++)
        if(largest<n[i])
        largest=n[i];
     
     for(i=0;i<10;i++)
        if(smallest>n[i])
        smallest=n[i];

     printf("Largest number is %f . \n", largest);
     printf("Smallest number is %f",smallest);

        return 0 ;
     

}