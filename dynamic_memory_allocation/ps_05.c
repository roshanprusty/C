#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(10 * sizeof(int));
    for (int i = 1; i <= 10; i++)
    {
        ptr[i] = 7 * i;
        printf("%d * %d = %d\n", 7, i, ptr[i]);
    }
    printf("\nafter free..........\n\n");
    //ptr = realloc(ptr,15*sizeof(int));
    free(ptr);
    for (int i = 1; i <= 15; i++)
    {
        ptr[i] = 7 * i;
        printf("%d * %d = %d\n", 7, i, ptr[i]);
    }
    return 0;
}