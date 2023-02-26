#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *ptr;
    ptr = (float *)malloc(3 * sizeof(int));

    for (int i = 0; i < 3; i++)
    {
        printf("enter the value for %d :: \n", i);
        scanf("%f", &ptr[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("the value of %d is %f\n", i, ptr[i]);
    }
    return 0;
}