#include <stdio.h>
void display();        // function prototype:the function we are going to define in the program
int main()             // and hn don't forgot to give semicolon in function prototype
{
    int a;
    printf("Initializing display function\n");
    display();        // function call
    printf("display function finished its work\n");
    return 0;
}
void display()       //dunction defination       
{
    printf("this is a display\n");
}