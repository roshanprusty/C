#include <stdio.h>
#include <string.h>

int main()
{
    char string1[] = "hello";
    char string2[] = "harry";

    int value = strcmp(string1, string2);
   // the function is used to compare two string It returns 0 if string are equal and negative value if first string mis-matching character
    printf("now the value is %d", value);

    return 0;
}