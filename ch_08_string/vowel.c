

#include <stdio.h>
int main()
{

    char x[100];
    int i = 0, count = 0;
    printf("\n Enter the string:");
    gets(x);
    while (x[i] != '\0')
    {
        if (x[i] == 'a' || x[i] == 'e' || x[i] == 'i' || x[i] == 'o' || x[i] == 'u' || x[i] == 'A' || x[i] == 'E' || x[i] == 'I' || x[i] == 'O' || x[i] == 'U')
        {
            count++;
        }
        i++;
    }
    printf("\n Number of vowels in the string are:%d", count);
    return 0;
}
