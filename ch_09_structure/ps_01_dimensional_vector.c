#include <stdio.h>
struct vector
{
    int x;
    int y;
};

int main()
{
    struct vector v, v2;
    v.x = 236;
    v.y = 693;
    printf("x dim is %d and y dim is %d\n", v.x, v.y);

    v2.x = 33;
    v2.y = 589;
    printf("x dim is %d and y dim is %d", v2.x, v2.y);

    return 0;
}