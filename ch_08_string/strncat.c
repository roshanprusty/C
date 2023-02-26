#include <stdio.h>
#include <string.h>

int main()
{

    char source[] = "roshan";
    char target[] = "sanchary";

    strncat(source, target, 5);

    printf("%s", source);
    return 0;
}