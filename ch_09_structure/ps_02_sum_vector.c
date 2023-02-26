#include <stdio.h>
typedef struct vector
{
    int x;
    int y;
} vtr;

// imortant :- kindly have a watch on it 

vtr sumvector(vtr v, vtr v2)
{
    vtr result;
    result.x = v.x + v2.x;
    result.y = v.y + v2.y;
    return result;
}

int main()
{
    vtr v, v2, sum;
    v.x = 2;
    v.y = 6;
    printf("x dim is %d and y dim is %d\n", v.x, v.y);

    v2.x = 6;
    v2.y = 5;
    printf("x dim is %d and y dim is %d\n", v2.x, v2.y);

    sum = sumvector(v, v2);
    printf("x dim of result is %d and y dim of result is %d ", sum.x, sum.y);

    return 0;
}