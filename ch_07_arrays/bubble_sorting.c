#include <stdio.h>

int main()
{
    int asc[100];
    int n, temp;

    printf("enter the size\n");
    scanf("%d", &n);

    printf("enter the value\n");

    for (int i = 0; i < n; i++)
    {

        scanf("%d", &asc[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (asc[j] < asc[i])
            {
                temp = asc[i];
                asc[i] = asc[j];
                asc[j] = temp;
            }
        }
    }
    printf("data items in ascending order\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", asc[i]);
    }

    return 0;
}