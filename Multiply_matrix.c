#include<stdio.h>
#include<conio.h>
void main()
{
    int k,i,j,m1[3][3],m2[3][3],m3[3][3];
   printf("Programe to add two matrix:\n ");
   printf("Enter the value of  corresponding element of first matrix:\n");
 for(i=0;i<3;i++)
  { for(j=0;j<3;j++)
     scanf("%d",&m1[i][j]);
  }
printf("Enter the value of  corresponding element of second matrix:\n");
 for(i=0;i<3;i++)
  { for(j=0;j<3;j++)
  scanf("%d",&m2[i][j]);
  }
  
   
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
    for(k=0;k<3;k++)
     {
    m3[i][j]=m3[i][j]+(m1[i][k]*m2[k][j]);
     }
        printf("%d",&m3[i][j]);
    
    }
    printf("\n");
}

}