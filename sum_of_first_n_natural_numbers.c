#include<stdio.h>
void main()
{
 int n,sum=0,i=0;
 printf("Enter the limit : ");
 scanf("%d",&n);
 do
 {
  sum=sum+i;
  i++;
 }while(i<=n);
 printf("The sum of %d natural numbers is %d ",n,sum);
}
