#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[25];
};

//***do remember ***
void show(struct employee emp)
{
    printf("code :: %d\n", emp.code);
    printf("salary :: %.2f\n", emp.salary);
    printf("name :: %s\n", emp.name);
}

int main()
{

    struct employee e1;
    struct employee *ptr = &e1;

    ptr->code = 111;
    ptr->salary = 236.33336;
    strcpy(e1.name, "roshan");

    show(e1);

    return 0;
}