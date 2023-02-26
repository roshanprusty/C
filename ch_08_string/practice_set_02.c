/*#include <stdio.h>

int main()
{
    char string1[] = "roshan";
    char *ptr = &string1;
    char string2[] = "Roshan";

    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n%s", string2);
    return 0;
}*/

#include <stdio.h>
#include <string.h>

int main()
{
    char string1[36];
    char string2[36];

    char c;
    int i = 0;

    printf("enter the value of the first string\n");
    scanf("%s", &string1);

    printf("enter the value character by character in string 2\n");

    while (c != '\n')
    {
        fflush(stdin);
        // it is used to flush the before character
        scanf("%c", &c);
        string2[i] = c;
        i++;
    }
    string2[i - 1] = '\0';
    printf("the value of string 2 is %s", string2);
    printf("\nthe value of string 2 is %s\n", string1);
    printf("strcmp for these string return %d", strcmp(string1, string2));

    return 0;
}