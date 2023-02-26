#include <stdio.h>
#include <string.h>

int main()
{

    char source[] = "roshan";
    char target[] = "prusty";

    strcpy(target, source);
    //this function used to copy the content of second string into first string pass to it

    printf("%s", target);
   // printf("%s", source);

    return 0;
}