#include <stdio.h>

int main()
{

    int a;

    printf("enter the value of a \n");
    scanf("%d", &a);

    int *b = &a;

    printf("the address of a variable is %u\n", &a);

    printf("the value of a is %d\n", a);

    printf("the value of a is %d\n", *b);

    printf("the value of a is %d\n", *&a);

    printf("the value of b is %d\n", b);

    printf("the address of b is %d\n", &b);

    return 0;
}