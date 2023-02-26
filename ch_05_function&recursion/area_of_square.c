#include <stdio.h>
#include <math.h>

int main()
{
    int side;
    printf("enter the side value of a square\n");
    scanf("%d", &side);

    printf("the area of a square is %f", pow(side, 2));
    // we have used %f becoz pow takes only double
    // dont forget to take #include <math.h> while taking pow
    
    return 0;
}