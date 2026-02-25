#include<stdio.h>
void main()
{
 int n,i,sum=0;
 float avg;
 printf("Enter the limit : ");
 scanf("%d",&n);
 int A[n];
 for(i=0;i<n;i++)
 {
  printf("Enter a number : ");
  scanf("%d",&A[i]);
 }
 for(i=0;i<n;i++)
 {
  sum=sum+A[i];
 }
 avg=sum/n;
 printf("SUM = %d\nAVERAGE = %f",sum,avg);
}
