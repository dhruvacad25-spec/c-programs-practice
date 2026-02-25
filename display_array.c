#include<stdio.h>
void main()
{
 int n,i;
 printf("Enter the size : ");
 scanf("%d",&n);
 int A[n];
 for(i=0;i<n;i++)
 {
  printf("Enter a number : ");
  scanf("%d",&A[i]);
 }
 for(i=0;i<n;i++)
 { 
   printf("%d\t",A[i]);
 }
}
