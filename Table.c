#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n,mul,terminate;
    printf("Programe to print table:\n");
    printf("Enter the number:\n");
    scanf("%d",&n);
    printf("Enter the terminate number:\n");
    scanf("%d",&terminate);
    for(i=1;i<=terminate;i++)
     {
     mul=(n*i);
     printf("%d*%d=%d",n,i,mul);
     printf("\n");
     }
    }
