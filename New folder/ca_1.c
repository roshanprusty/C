#include <stdio.h>
#include <math.h>

int main()
{
    int arm;
    int rem, sum = 0;

    printf("enter the number to check armstrong or not\n");
    scanf("%d", &arm);

    int temp =arm;
    while (arm > 0)
    {
        rem = arm % 10;
        sum = sum + pow(rem, 3);
        arm = arm / 10;
    }
    if (sum == temp)
    {
        printf("the given number %d is armstrong number\n", temp);
    }
    else
    {
        printf("the given number %d is not a armstrong number \n", temp);
    }
    return 0;
}