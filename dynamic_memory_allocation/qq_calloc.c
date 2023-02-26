#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n;
    ptr = (int *)calloc(n, sizeof(int));
    printf("HOW MANY INTEGERS YOU WANT\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter the value for array [%d] \n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("the value of array[%d] is %d\n", i, ptr[i]);
    }
    return 0;
}