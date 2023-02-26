#include <stdio.h>

int main()
{
    int n;
    int table[10];

    printf("enter the value for which you want table\n");
    scanf("%d", &n);

    printf("the table of given value %d is : \n",n);

    for (int i = 0; i < 10; i++)
    {
        table[i] = n * (i + 1);
        printf("%d*%d=%d\n", n, i + 1, table[i]);
    }
    return 0;
}