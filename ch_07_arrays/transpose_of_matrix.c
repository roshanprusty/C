
#include <stdio.h>
int main()
{
    int a[100][100], transpose[10][10], i, j, n, m;
    printf("\nENTER NUMBER OF ROWS: ");
    scanf("%d", &n);
    printf("\nENTER NUMBER OF COLUMNS: ");
    scanf("%d", &m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("\nENTER VALUE OF A(%d,%d): ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nMATRIX:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            transpose[j][i] = a[i][j];
        }
    }
    printf("\nTRANSPOSE OF MATRIX:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
        
    }
    return 0;
}
