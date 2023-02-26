#include <stdio.h>
#include <math.h>

int main()
{
    int r;
    float pie = 3.14;
    int *ptr = &r;
    float area;

    printf("enter the radius of the circle\n");
    scanf("%d", &*ptr);

    area = pie * pow(*ptr, 2);
    printf("the area of a circle is %.3f", area);

    return 0;
}