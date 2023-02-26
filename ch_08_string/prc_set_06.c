#include <stdio.h>
void encrpyted(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr+1;
        ptr++;
    }
}

int main()
{
    char c [] = "hie myself roshan";
    encrpyted(c);
    printf("encrpyted string is %s",c);

    return 0;
}