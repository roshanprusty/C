#include <stdio.h>
#include <string.h>

int main()
{
    char str[125];
    char str2[25];
    int l1,l2;
   
    printf("enter the string1\n");
    gets(str);
    printf("enter the string2\n");
    gets(str2);
    l1 = strlen(str);
    l2 = strlen(str2);
    if (l1 > l2)
    {
        printf("the length of first string (%d) is more as compared to string 2 (%d)", l1, l2);
    }
    else
    {
        printf("the length of second string (%d) is more as compared to string 1 (%d) ", l2, l1);
    }
}
