#include<stdio.h>

int main()
{
char str1[25];
char str2[25];
int i ;

printf("enter the string\n");
gets(str1);

for( i = 0; str1[i] != '\0'; i++)
{
    str1[i] = str2[i];
    
}
str2[i]='\0';
puts(str2);


return 0;
}