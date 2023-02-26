#include<stdio.h>

int main(){
int *f;
int  *ptr = &f;
int n,temp =1;
printf("enter the value for which you want fcatorial");
scanf("%d",&n);
for (int  i =1;i<=n;i++)
{
    *ptr = i *temp;
    temp =*ptr;

}
printf("the factorial of given value is %d",*ptr);
return 0;
}