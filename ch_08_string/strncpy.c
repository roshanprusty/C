#include <stdio.h>
#include <string.h>

int main()
{

    char source[] = "roshan";
    char target[] = "prusty";

    strncpy(target, source, 4);

    printf("%s", target);
    return 0;
}
// mam here if i want to print roshprust how can i do 