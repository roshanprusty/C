#include <stdio.h>

int main()
{
    int i;
    printf("enter the number ");
    scanf("%d", &i);

    for (int a = i; a; a--)          //for(initialize;test;increment or decrement)
    {
        printf("the number is %d\n",a);
    }
    return 0;
}
