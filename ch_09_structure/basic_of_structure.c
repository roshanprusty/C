#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[12];
};

int main()
{
    struct employee e1;
    e1.code = 100;
    e1.salary = 96.946665;
    strcpy(e1.name, "roshan");

    printf("%d\n", e1.code);
    printf("%.3f\n", e1.salary);
    printf("%s\n", e1.name);

    return 0;
}