#include <stdio.h>

int main()
{
    int a, i = 0;
    printf("till how much natural nos you want\n");
    scanf("%d", &a);

    while (i <= a)
    {
        printf("the number is %d\n", i);

        i++;
    }
    return 0;
}