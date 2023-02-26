#include <stdio.h>
#include <string.h>

int main()
{
    char name[25];
    int l;

    printf("enter your name\n");
    gets(name);

    l = strlen(name);
    printf("the reverse of your name  %s is \n",name);

    for (int i = l ; i >=0 ; i--)
    {
       printf("%c",name[i]);
    }

   
    return 0;
}