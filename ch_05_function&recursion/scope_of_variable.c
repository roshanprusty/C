
#include <stdio.h>
void uselocal(void);
void usestatic(void);
void useglobal(void);
int x = 1;

void main()
{
    int x = 5;
    printf("\n The value of x within main program is %d", x);
    printf("\n");
    {
        int x = 7;
        printf("\n The value of x within block is %d", x);
        printf("\n");
    }
    printf("\n The value of x within main program is %d", x);
    printf("\n");

    uselocal();
    usestatic();
    useglobal();
    uselocal();
    usestatic();
    useglobal();

    printf("\n The value of x within main program is %d", x);
    printf("\n PROGRAMS ENDS HERE");
}

void uselocal(void)
{
    int x = 4;
    printf("\n The value of x within local function is %d", x);
    x++;
    printf("\n The value of x within local function after uodation is %d", x);
    printf("\n");
}

void usestatic(void)
{
    static int x = 50;
    printf("\n The value of x within static function is %d", x);
    x++;
    printf("\n The value of x within static function after updation is %d", x);
    printf("\n");
}

void useglobal(void)
{
    printf("\n The value of x within global function is %d", x);
    x = x * 10;
    printf("\n The value of x within lobal funtion after updation is %d", x);
    printf("\n");
}