#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
};
int main()
{
    struct student s, s1;
    printf("Enter information of first student:\n");
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    printf("Enter information of second student:\n");
    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter roll number: ");
    scanf("%d", &s1.roll);
    printf("Enter marks: ");
    scanf("%f", &s1.marks);
    if (s.marks > s1.marks)
    {
        printf("\n Marks of first student are more..");
    }
    else
    {
        printf("\n Marks of second student are more..");
    }
    return 0;
}