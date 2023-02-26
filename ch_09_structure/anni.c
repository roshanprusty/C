#include<stdio.h>
typedef struct annivesary
{
    int date;
    int month;
    int year;

}anni;
void show(anni ann)
{
    
    printf("your 25 annivesry will come in year :: %d/%d/%d\n",ann.date,ann.month,ann.year);
}

int main(){
    int a;
anni an;
printf("enter the date\n");
scanf("%d",&an.date);

printf("enter the month\n");
scanf("%d",&an.month);

printf("enter the year\n");
scanf("%d",&an.year);

a = 25 +an.year;

show(an);
printf("your 25 annivesry will come in year :: %d/%d/%d\n",an.date,an.month,a);


return 0;
}