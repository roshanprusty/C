
#include <string.h>
#include <stdio.h>
int main()
{
    char str1[20], str2[10];
    int x;
    printf("\n Enter first string:");
    gets(str1);
    printf("\n Enter second string:");
    gets(str2);
    x = stricmp(str1, str2);
    if (x == 0)
    {
        printf("\n Strings are equal");
    }
    else if (x > 0)
    {
        printf("\n First string is greater than second string(strings are not equal)");
    }
    else
    {
        printf("\n First string is less than second string(strings are not equal)");
    }
    return 0;
}
