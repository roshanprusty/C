#include<stdio.h>
void postivenos(int *ptr)
{
    for (int i =0;i<13;i++)
         {
         if (ptr[i]%2==0)
     {
         printf("%d\n",ptr[i]);
     }
     
         }
     
}

int main(){
int arr [] ={1,8,9,6,3,8,52,11,45,31,20,10,99};
postivenos(arr);
return 0;
}