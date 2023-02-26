#include <stdio.h>

int sum(int x, int y)
{
    x = 7;
    y = 12;
    return x + y;
}

int main()
{
    int x = 3;
    int y = 4;

    printf("the value of x and y is %d and %d\n", x, y);
    printf("the sum of x and y is %d\n", sum(x, y));
    printf("the value of x and y is %d and %d after function call\n", x, y);

    //NOTE :: by changing value of x and y in function nothing will change in main

    return 0;
}
