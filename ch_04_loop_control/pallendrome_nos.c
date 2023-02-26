#include <stdio.h>

int main()
{

    int a;

    int reverse_number = 0;
    printf("enter the number to check pallendrome or not\n ");
    scanf("%d", &a);
    int temp = a;
    while (temp > 0)
    {
        int last_digit = temp % 10;
        reverse_number = (reverse_number * 10) + last_digit;
        temp /= 10;
    }
    if (reverse_number == a)
    {
        printf("it is  a pallendrome number");
    }
    else
    {
        printf("it is not  a pallendrome number");
    }

    return 0;
}