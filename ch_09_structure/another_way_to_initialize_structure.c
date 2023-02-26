#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[30];
};

int main()
{
    struct employee roshan = {101, 36.258741, "sai"};
    printf("name :: %s\n", roshan.name);
    printf("salary :: %.3f\n", roshan.salary);
    printf("code :: %d\n", roshan.code);

    return 0;
}