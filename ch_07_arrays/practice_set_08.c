#include<stdio.h>
void printtable (int *multable, int num, int n)
{
     printf("the multiplication table of %d :: \n",num);
    for (int i = 0; i < n; i++)
    {
        multable[i] = num * (i + 1);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d*%d = %d\n", num, i + 1, multable[i]);
    }
      printf("\n*********************************************************************************************************\n");
}

int main(){
int multable[3][10];
int num1, num2 ,num3 ;
printf("enter 1st the value\n");
scanf("%d",&num1);

printf("enter 2nd the value\n");
scanf("%d",&num2);

printf("enter 3rd the value\n");
scanf("%d",&num3);

printtable (multable[0],num1,10);
printtable (multable[1],num2,10);
printtable (multable[2],num3,10);
return 0;
}