#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    if (ptr == NULL)
    {
        printf("\t\t\t Memory not allocated\n\n");
    }
    else
    {
        printf(" Memory has been allocated\n");
    }
        for (int i = 0; i <= 5; i++)
    
        {
            printf("enter the value for %d element :: \n", i);
            scanf("%d", &ptr[i]);
        }
        for (int i = 0; i <= 5; i++)
        {
            printf("the value of %d element is %d\n", i, ptr[i]);
        }
        return 0;
    }