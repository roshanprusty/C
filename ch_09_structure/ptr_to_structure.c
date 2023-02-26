#include <stdio.h>
struct employee
{
    int code;
    float salary;
    char name;
};

int main()
{
    struct employee e1;
    struct employee *ptr = &e1;

    //(*ptr).code = 121;
    ptr->code =121; //like this also you can write ~ arrow operater

    printf("code :: %d\n",e1.code);
    printf("code :: %d",(*ptr).code);


    return 0;
}