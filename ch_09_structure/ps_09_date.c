#include <stdio.h>
typedef struct date
{
    int date;
    int month;
    int year;

} dt;
void show(dt d1)
{
    printf("DATE :: %d/%d/%d\n", d1.date, d1.month, d1.year);
}

int main()
{
    dt d ={21,07,2202};

    /* d.date;
    d.month;
    d.year;

   printf("enter the date\n");
    scanf("%d", &d.date);

    printf("enter the month\n");
    scanf("%d", &d.month);

    printf("enter the year\n");
    scanf("%d", &d.year);*/

    show(d);

    return 0;
}