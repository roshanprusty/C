#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("ps_01.txt", "r");
    int num1, num2, num3;
    fscanf(ptr, "%d %d %d ", &num1, &num2, &num3);
    printf("the value of a , b and c is %d %d %d\n", num1, num2, num3);
    fclose(ptr);
    printf("prgrm sucessfully runed");
    return 0;
}