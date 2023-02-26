#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int l;
    int wrd=0;
    printf("enter the string\n");
    gets(str);
    l = strlen(str);
    for (int i = 0; i < l; i++)
    {
        if( str[i] == ' ' || str[i] =='\n'||str[i] =='\t')
        {
            wrd++;
        }

    }
    printf("the total words in given string %d\n",wrd+1);
    return 0;
}