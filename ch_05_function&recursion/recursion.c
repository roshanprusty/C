#include <stdio.h>
int factorial(int a);

int main()
{
    int f;
    printf("for which number fctorial you want\n");
    scanf("%d", &f);
    
    printf("the factorial of % d is % d", f, factorial(f));
     // note when you are using scan f remember to do like this ^
     
         return 0;
}
int factorial(int a)
{
    if (a == 0 || a == 1)
    {
        return 1;
    }
    else
    {
        return (a * factorial(a - 1));
    }
}