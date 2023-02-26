#include <stdio.h>

int main()
{
    int a;
    printf("enter the number ");
    scanf("%d", &a);

    while(a <= 9) //it tells the computer that a given set of instruction must be executed repeatedly
    {

        printf("%d\n", a);
        a++;
    }
    return 0;
}