#include <stdio.h>

int main()
{
    int n_students = 3;
    int n_subject = 2;

    int marks[3][2];

    for (int i = 0; i < n_students; i++)
    {
        for (int j = 0; j < n_subject; j++)
        {
            printf("enter the marks of student %d of subject %d\n", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    for (int i = 0; i < n_students; i++)
    {
        for (int j = 0; j < n_subject; j++)
        {
            printf("the marks of student %d in subject %d is %d\n", i + 1, j + 1, marks[i][j]);
        }
    }
    return 0;
}