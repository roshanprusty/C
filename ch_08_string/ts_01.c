#include <stdio.h>

int main()
{
    char str[25];
    int l = 0;

    printf("enter your name\n");
    gets(str);

    while (str[l] != '\0')
    {

        /* if (str[l] == ' ')
        {
            l--;
        }*/

        l++;
    }
    printf("the length of your name is %d", l - 2);
    return 0;
}
