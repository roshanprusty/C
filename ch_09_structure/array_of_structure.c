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
    struct employee facebook[20];
    facebook[0].code = 100;
    facebook[0].salary = 849.9625;
    strcpy(facebook[0].name, "roshan");

    /*--------------
    -------------------------
    ---------------------------------
    ----------------------------------------
    ============================================
    like this you can upload all detail of employee which make easy for programmer to upload */

    printf("%s\n", facebook[0].name);
    printf("%.3f\n", facebook[0].salary);
    printf("%d\n", facebook[0].code);

    return 0;
}