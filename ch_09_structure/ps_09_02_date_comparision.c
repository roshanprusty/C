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
int datecomp(dt d1, dt d2)
{
    if (d1.year > d2.year)
    {
        return 1;
    }
    if (d1.year < d2.year)
    {
        return -1;
    }
    if (d1.month > d2.month)
    {
        return 1;
    }
    if (d1.month < d2.month)
    {
        return -1;
    }
    if (d1.date > d2.date)
    {
        return 1;
    }

    if (d1.date > d2.date)
    {
        return -1;
    }
    return 0;
}

int main()
{
    dt d1 = {21, 7, 2002};
    dt d2 = {18, 9, 2002};
    show(d1);
    show(d2);

    int a = datecomp(d1, d2);
    printf("date comparision function retur :: %d ",a);

    return 0;
}