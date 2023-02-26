#include <stdio.h>
#include <string.h>

int main()
{
    char name[70];
    int l;












    
    printf("enter your name :: ");
    //scanf("%d",&name);
    gets(name);
    puts(name);
    l = strlen(name);
    //printf("the given name is %s\n",name);
    printf("the length of the name is %d", l);

    return 0;
}