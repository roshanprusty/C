#include <stdio.h>

int main()
{
    int a, b;
    int result = 0;
    printf("enter the first number\n", a);
    scanf("%d", &a);
    printf("enter the second number \n", b);
    scanf("%d", &b);

    char c;
    printf("enter the operation\n");
    scanf("%d", &c);
    switch (c)
    {
    case '+':
        result = a + b;
        printf("%d", result);
        break;

    case '-':
        result = a - b;
        printf("%d", result);
        break;

    case '/':
        result = a / b;
        printf("%d", result);
        break;

    case '*':
        result = a * b;
        printf("%d", result);
        break;

    default:
        printf("invalid operation");
    }

    return 0;
}