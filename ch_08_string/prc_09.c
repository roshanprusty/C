#include <stdio.h>
void check(char *i, char j)
{
    char *ptr = i;

    while (*ptr != '\0')
    {
        if (*ptr == j)
        {
            printf("yes it is there");
        }
    }
    ptr++;
}

int main()
{
    char string[63] = "rbfJBJNEbdfkjbduanfu";
    char c;
    int count;
    printf("enter the character to check\n");
    scanf("%s", c);
    check(string, c);

    return 0;
}