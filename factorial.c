#include<stdio.h>
void main()
{
 int n,f=1,i;
 printf("Enter a number to be factorised : ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
   f=f*i;
 }
 printf("Factorial of %d is %d",n,f);
}
