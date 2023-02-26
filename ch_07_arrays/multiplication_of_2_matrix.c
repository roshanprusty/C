
#include <stdio.h>
void main()
{
    int a[100][100], b[100][100], c[100][100], r1, r2, c1, c2, i, j, k;
    printf("\n Enter the number of rows for matrix 1:");
    scanf("%d", &r1);
    printf("\n Enter the number of column for matrix 1:");
    scanf("%d", &c1);
    printf("\n Enter the number of rows for matrix 2:");
    scanf("%d", &r2);
    printf("\n Enter the number of column for matrix 2:");
    scanf("%d", &c2);
    while (c1 != r2)
    {
        printf("\n ERROR---- Enter again");
        printf("\n Enter the number of rows for matrix 1:");
        scanf("%d", &r1);
        printf("\n Enter the number of column for matrix 1:");
        scanf("%d", &c1);
        printf("\n Enter the number of rows for matrix 2:");
        scanf("%d", &r2);
        printf("\n Enter the number of column for matrix 2:");
        scanf("%d", &c2);
    }

    printf("\n MATRIX A \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("\n Enter the value for a[%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n MATRIX B \n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("\n Enter the value for b[%d][%d]:", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            c[i][j] = 0;
        }
    }
    printf("\n COMPUTING MULTIPLICATION \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            for (k = 0; k < c1; k++)
            {
                c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
            }
        }
    }

    printf("\n RESULTANT MATRIX \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d \t", c[i][j]);
        }
        printf("\n");
    }
    printf("\n PROGRAM ENDS HERE");
}
