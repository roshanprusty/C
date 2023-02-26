#include <stdio.h>
long factorial(long n)
{
    int f;
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        f = n * (n - 1);
    }
    return f;
}

int main()
{
    int n;
    printf("enter the value for which number you want factorial\n");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        factorial(n);
       
    }
     printf("the factorial of given value is %d\n", factorial(n));
    return 0;
}