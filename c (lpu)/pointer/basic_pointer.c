#include <stdio.h>
#include <math.h>
void cube(int *a)
{

    *a = pow(*a, 3);
}
int main()
{
    int n = 3;
    printf("the value of n is %d\n", n);
    cube(&n);
    printf("the new value of n after function call is %d\n", n);

    return 0;
}