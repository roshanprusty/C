#include <stdio.h>

int main()
{
    char string[] = "cjxbjfba";
    char check[] = "j" ;
    char *ptr2 = check ;
    char *ptr = &string[0];

    while (*ptr !='\0')
    {
        if (*ptr == *ptr2)
        {
            printf("yes this character is present\n");
        
        }
        else 
        {
            printf("character is not present\n");
        }
        ptr++;

    }

        return 0;
}