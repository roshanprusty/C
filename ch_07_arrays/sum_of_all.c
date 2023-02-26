#include<stdio.h>
void main()
{
int a[500],i,n,sum=0;
printf("\n Enter the no. of elements for an array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n Enter the value for a[%d]:",i);
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];

}
printf("\n Sum of all elements in an array is %d",sum);
printf("\n PROGRAM ENDS HERE");
}