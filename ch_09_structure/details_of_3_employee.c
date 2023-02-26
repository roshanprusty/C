/*#include <stdio.h>
#include <string.h>
struct employee1
{
    int code;
    float salary;
    char name[36];
};

struct employee2
{
    int code;
    float salary;
    char name[36];
};
struct employee3
{
    int code;
    float salary;
    char name[36];
};

int main()
{
    struct employee1 e1;
    e1.code = 100;
    e1.salary = 326.3489;
    strcpy(e1.name, "roshan");

    struct employee2 e2;
    e2.code = 101;
    e2.salary = 396.33695;
    strcpy(e2.name, "sanchary");

    struct employee3 e3;
    e3.code = 102;
    e3.salary = 452.3666;
    strcpy(e3.name, "ranee");

    printf("%s\n", e1.name);
    printf("%.3f\n", e1.salary);
    printf("%d\n", e1.code);

    printf("\n**************************************************************\n");

    printf("%s\n", e2.name);
    printf("%.3f\n", e2.salary);
    printf("%d\n", e2.code);

    printf("\n**************************************************************\n");

    printf("%s\n", e3.name);
    printf("%.3f\n", e3.salary);
    printf("%d\n", e3.code);
    return 0;
}*/
#include <stdio.h>
struct employee
{
    int code;
    float salary;
    char name[25];
};

int main()
{
    struct employee e1, e2, e3;
    printf("enter the code of employee 1\n");
    scanf("%d", &e1.code);
    printf("enter the salary of employee 1\n");
    scanf("%f", &e1.salary);
    printf("enter the name of employee 1\n");
    scanf("%s", e1.name);
    
    //NOTE :: we don't use & while storing string

    printf("enter the code of employee 2\n");
    scanf("%d", &e2.code);
    printf("enter the salary of employee 2\n");
    scanf("%f", &e2.salary);
    printf("enter the name of employee 2\n");
    scanf("%s", e2.name);

    printf("enter the code of employee 3\n");
    scanf("%d", &e3.code);
    printf("enter the salary of employee 3\n");
    scanf("%f", &e3.salary);
    printf("enter the name of employee 3\n");
    scanf("%s", e3.name);

    printf("%s\n", e1.name);
    printf("%.3f\n", e1.salary);
    printf("%d\n", e1.code);

    printf("\n**************************************************************\n");

    printf("%s\n", e2.name);
    printf("%.3f\n", e2.salary);
    printf("%d\n", e2.code);

    printf("\n**************************************************************\n");

    printf("%s\n", e3.name);
    printf("%.3f\n", e3.salary);
    printf("%d\n", e3.code);

    return 0;
}