#include <stdio.h>

int main()
{

    int marks[3];

    printf("enter the value of mark for student 1\n");
    scanf("%d", &marks[0]);

    printf("enter the value of mark for student 2\n");
    scanf("%d", &marks[1]);

    printf("enter the value of mark for student 2\n");
    scanf("%d", &marks[2]);

    printf("you have entered the marks %d %d  and %d", marks[0], marks[1], marks[2]);

    return 0;
}
