#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[25];
} emp;

// it is not like that you cannot write struct employee you can write but by using typedef it will very  helpful for programer
//in previous where you used to write struct employee now only you can write emp instead of struct employee

void show(emp emp1)
{
    printf("code :: %d\n", emp1.code);
    printf("salary :: %.2f\n", emp1.salary);
    printf("name :: %s\n", emp1.name);
}

int main()
{

    emp e1;
    emp *ptr = &e1;

    ptr->code = 111;
    ptr->salary = 236.33336;
    strcpy(e1.name, "roshan");

    show(e1);

    return 0;
}