#include <stdio.h>

int main()
{
    int marks[5];

    for (int i = 0; i < 5; i++)
    {   //NOTE:array index starts from 0 not 1
        //if you take 1 then take value from......

        printf("enter the value of marks for students %d\n", i + 1); //i+1 written becoz to increase readability
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("the value of marks for students is %d is : %d\n", i + 1, marks[i]);
    }
    return 0;
}