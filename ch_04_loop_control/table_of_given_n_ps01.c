#include <stdio.h>

int main()
{

    int result, n;

    printf("for which value you want table\n");
    scanf("%d", &n);

    printf("the table of %d\n", n);

    for (int i = 1; i <= 10; i++)
    {
        result = n * i;

        printf("%d*%d=%d\n", n, i, result);
    }

    return 0;
}