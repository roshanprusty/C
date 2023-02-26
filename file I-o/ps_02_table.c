#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("ps_table_02.txt", "w");
    int t, n;
    printf("enter the table which you want to print\n");
    scanf("%d", &n);
    fprintf(ptr, "the table of %d\n", n);
    for (int i = 1; i <= 10; i++)
    {
        t = n * i;
        fprintf(ptr, "%d * %d = %d\n", n, i, t);
    }
    fclose(ptr);
    printf("sucessfully generated of given table %d in ps_table_02.txt \n", n);

    return 0;
}