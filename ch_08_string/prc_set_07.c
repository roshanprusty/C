#include <stdio.h>
void decrpyted(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr-1;
        ptr++;
    }
}

int main()
{
    char c [] = "ijf!nztfmg!sptibo";
    decrpyted(c);
    printf("decrpyted string is %s",c);

    return 0;
}