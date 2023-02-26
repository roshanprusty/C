#include <stdio.h>
#include <string.h>

int main()
{

    char source[] = "roshan";
    char target[] = "prusty";

    strcat(source, target);

    printf("%s", source);

    return 0;
}