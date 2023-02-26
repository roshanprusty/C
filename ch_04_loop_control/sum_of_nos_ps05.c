#include <stdio.h>

int main()
{
    int n, a, result=0;

    //don't forgot to set the value of result if you don't 
    //compiler takes (resut value) as a ascii value 

    printf("upto which nos you want sum\n");
    scanf("%d", &n);

    for (a = 0; a <= n; a++)
    {

        result += a;
    }
    printf("the sum of natural nos from o to %d is %d",n, result);

    return 0;
}