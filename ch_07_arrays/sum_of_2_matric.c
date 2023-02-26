
#include <stdio.h>
void main()
{
    int a[3][3], b[3][3], c[3][3], i, j;
    printf("\n MATRIX 1 \n ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\n Enter the value for a[%d][%d]", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n MATRIX 2 \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\n Enter the value for b[%d][%d]", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n COMPUTING SUM OF BOTH MATRIX \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\n RESULTANT MATRIX \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d \t", c[i][j]);
        }
        printf("\n");
    }
    printf("\n PROGRAM ENDS HERE");
}
