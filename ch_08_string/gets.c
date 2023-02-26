#include <stdio.h>

int main()
{
    char name[20];

    printf("enter your full name :\n ");
    gets(name);

//gets is which used to recieve multiword string through scanf we also can do but if we write roshan prusty the output will show roshanprusty not roshan prusty thats why ther is use of gets()

    printf("your name is %s", name);
    return 0;
}