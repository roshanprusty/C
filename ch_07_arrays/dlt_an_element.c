#include <stdio.h>
void main()
{
    int a[100], p, i, n;
    printf("\n Enter the number of elements:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {

        printf("\n Enter the value for a[%d]:", i);
        scanf("%d", &a[i]);
    }
    printf("\n Enter the position from where you need to delete the element");
    scanf("%d", &p);
    for (i = p - 1; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    printf("\n RESULTANT ARRAY IS:");
    for (i = 0; i < n - 1; i++)
    {
        printf(" %d ", a[i]);
    }
}
