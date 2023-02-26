
#include <stdio.h>
int main()
{
    char x[100];
    int i = 0, length = 0, c = 0, w = 1;
    printf("\n Enter String:");
    gets(x);
    while (x[i] != '\0')
    {
        if (x[i] == ' ' && x[i + 1] != ' ')
        {
            w++;
        }
        c++;
        i++;
    }
    printf("\n Total number of characters are:%d, and no. of words are:%d", c, w);
    return 0;
