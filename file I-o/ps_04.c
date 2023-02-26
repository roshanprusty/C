#include <stdio.h>
struct employee
{
    char name[25];
    int salary;
};

int main()
{
    FILE *ptr;
    ptr = fopen("employee_list.txt", "w");

    struct employee e1, e2, e3;

    printf("enter the name of the employee\n");
    gets(e1.name);
    printf("enter the salary of the %s\n", e1.name);
    scanf("%d", &e1.salary);

    fflush(stdin);
    printf("enter the name of the employee\n");
    gets(e2.name);
    printf("enter the salary of the %s\n", e2.name);
    scanf("%d", &e2.salary);

    fflush(stdin);
    printf("enter the name of the employee\n");
    gets(e3.name);
    printf("enter the salary of the %s\n", e3.name);
    scanf("%d", &e3.salary);

    fprintf(ptr, "the name of employee is :: %s\n", e1.name);
    fprintf(ptr, "the salary of %s is %d\n", e1.name, e1.salary);

    fprintf(ptr, "\n*************************************************************************************************************\n");

    fprintf(ptr, "the name of employee is :: %s\n", e2.name);
    fprintf(ptr, "the salary of %s is %d\n", e2.name, e2.salary);

    fprintf(ptr, "\n*************************************************************************************************************\n");

    fprintf(ptr, "the name of employee is :: %s\n", e3.name);
    fprintf(ptr, "the salary of %s is %d\n", e3.name, e3.salary);

    printf("program done now you can check by opening");

    return 0;
}