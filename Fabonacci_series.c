#include<stdio.h>
#include<conio.h>
int main()
{
int i, sum, n, num1,num2,num3;
num1=0;
num2=1;
sum=0;
 printf("Programe to print fabonacci series: \n");
printf("Enter the number of terms: \n");
 scanf("%d", &n);
 if(n==1)
 {
  printf("0 \n");
  sum=0;
  printf("%d", sum);
 }
if(n==2)
{
    printf("0   1 \n");
    sum=1;
    printf("%d", sum);
}
if(n>3)
  printf("%d\b",num1);
  printf("%d\b",num2);

}