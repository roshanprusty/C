#include <stdio.h>

int main()
{
    int n;
    printf("enter the number to check the number prime or not\n");
    scanf("%d", &n);

    if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0 )
    {
        printf("the given number %d is not a prime number\n", n);
    }
    else
    {
        printf("the given number %d is a prime number\n", n);
    }
    return 0;
}