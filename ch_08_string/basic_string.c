#include <stdio.h>

int main()
{
    // char string1 [] = {'R' ,'O' ,'S', 'H' ,'A', 'N', '\0'};
    char string2 [] = "ROSHAN";
     char *ptr = string2;


   //printf("%c\n",string1);
   //printf("%c\n",string2);

    while(*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
     

    return 0;
    
}