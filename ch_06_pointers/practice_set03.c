#include <stdio.h>
int ten_times(int *a);

int main()
{

    int i;
    printf("enter the value of i\n");
    scanf("%d", &i);

    int *j = &i;

    printf("the new value of i after increasing ten times is %u\n", ten_times(j));
    return 0;
}
int ten_times(int *a)
{
    return *a *= 10;
}