#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int *ptr2;
    ptr = (int *)calloc(6, sizeof(int));
    for (int i = 0; i < 6; i++)
    {
    ptr2=(int *)calloc(30,sizeof(int));
        printf("enter the value for array [%d] \n", i);
        scanf("%d", &ptr[i]);
    }
    free (ptr2);
    for (int i = 0; i < 6; i++)
    {
        printf("the value of array[%d] is %d\n", i, ptr[i]);
    }
    return 0;
}