#include <stdio.h>
typedef struct complexnos
{
    int real;
    int complex;

} cmpn;
void display(cmpn c1)
{
    printf("the value of real part is %d\n", c1.real);
    printf("the value of complex part is %d\n", c1.complex);
}

int main()
{
    cmpn cmp[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter the value of real part for %d\n", i+1);
        scanf("%d", &cmp[i].real);
        printf("enter the value of complex part for %d\n", i+1);
        scanf("%d", &cmp[i].complex);
    }
    for (int i = 0; i < 5; i++)
    {
        display(cmp[i]);
    }

    return 0;
}