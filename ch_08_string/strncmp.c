#include <stdio.h>
#include <string.h>

int main()
{
    char string1[] = "hello";
    char string2[] = "hedvz";

    int value = strncmp(string1, string2,2);
    //it will compare only 2 character of string 1 and string 2
   
    printf("now the value is %d", value);

    return 0;
}