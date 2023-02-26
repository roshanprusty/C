#include <stdio.h>

int main()
{
    int array[5];
    int *ptr = &array[0];
    for (int j = 0; j < 5; j++)
    {
        printf("enter the value of array[%d] \n", j);
        scanf("%d", ptr);
        ptr++;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("the given value is %d\n", array[i]);
        printf("the address of array[%d] is %u\n", array[i], ptr);
        ptr++;
    }
    return 0;
}