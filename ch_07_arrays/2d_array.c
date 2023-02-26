#include <stdio.h>
void main()
{
    int a[3][3], i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\n Enter the value for a[%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n THE MATRIX ELEMENTS ARE: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d \t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n PROGRAM ENDS HERE");
}