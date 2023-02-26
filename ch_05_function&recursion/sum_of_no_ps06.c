#include <stdio.h>
int sum(int n, int result);

int main()
{

    int a, k;
    printf("enter the value you want sum of natural nos:\n ");
    scanf("%d", &a);

    printf("the sum of a given natural nos is %d", sum(a, k));

    return 0;
}
int sum(int n, int result)
{
    result = 0;
    for (int i = 0; i <= n; i++)
    {
        result += i;
    }
    return result;
}