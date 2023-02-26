/*#include <stdio.h>

int main()
{
    int marks[4];
    int *ptr = &marks[0];
    

    for (int i = 0; i < 4; i++)
    {
        printf("enter the marks for student %d\n",i+1 );
        scanf("%d", ptr);
        ptr++;
    }
    for (int i = 0; i < 4; i++)
    {
        printf("the mark of student %d is %d\n", i + 1, marks[i]);
    }
    return 0;
}*/

#include <stdio.h>

int main()
{
    int array[4] = {0, 1, 2, 3, 4};
    int *ptr = &array[0];
    for (int i = 0; i < 5; i++)
    {
        printf("the address of %d is %u\n", array[i], ptr);
        ptr++;
    }
    return 0;
}