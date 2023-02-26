#include <stdio.h>

int main()
{
    int a = 4;
    int *b = &a;
    printf("the value of a is %d\n", *b);
    int i = 9;
    int *j = &i;
    printf("the value of i is %d\n", *j);

    //  *b += 2;
    //printf("the new value of a is %d\n", *b);

    //*j -= 2;
    //printf("the new value of i is %d\n", *j);

    *j -= *b;
    printf("the new value of i is %d\n", *j);

    return 0;
}