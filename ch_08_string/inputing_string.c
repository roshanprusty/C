#include <stdio.h>

int main()
{
    char name[20];

    printf("enter your name :\n ");
    scanf("%s", name);

    printf("your name is %s", name);
    return 0;
}

//note:: scanf cannot be used to input multiword strings with space

/*enter your name :
 roshanprusty
your name is roshanprusty*/


/*enter your name :
 roshan prusty
your name is roshan*/