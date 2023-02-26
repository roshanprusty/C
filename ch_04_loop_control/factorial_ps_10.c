#include <stdio.h>

int main()
{
    int n, i,result = 1;
    printf("enter the number for which you want factorial:\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {

        result *= i;
    }

    printf("the factorial of a given number is %d", result);
    return 0;
}