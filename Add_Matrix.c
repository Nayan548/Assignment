#include<stdio.h>
int main()
{
    int i, j, m1[3][3],m2[3][3],m3[3][3];
   printf("Programe to add two matrix.\n ");
   printf("Enter the value of corresponding elements of corresponding matrix.\n");
  
printf("Enter the value of corresponding element of first matrix. \n");

for(i=0;i<3;i++)
    for(j=0;j<3;j++)
      scanf("%d",&m1[i][j]);

printf("Enter the value of corresponding element of second matrix. \n");

for(i=0;i<3;i++)
    for(j=0;j<3;j++)
      scanf("%d",&m2[i][j]);
      printf("The corresponding element. \n");
for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
  { 
   m3[i][j]=m1[i][j]+m2[i][j];
   printf("%d \t",m3[i][j]);
    
  } 
   printf("\n");
 }
return 0;
}