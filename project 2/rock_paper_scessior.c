#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void show(char you, char comp)
{
    if (comp == you)
    {

        printf("oops its draw");
    }
    else if (comp == 's' && you == 'p' || comp == 'r' && you == 's' || comp == 'p' && you == 'r')
    {
        printf("you loose, better luck next time ");
    }
    else
    {
        printf("ohoooo you won !!");
    }
}

int main()
{
    char comp, you;
    srand(time(0));
    int number = rand() % 90 + 1;

    if (number >= 60)
    {
        comp = 's';
    }
    else if (number >= 30 && number < 60)
    {
        comp = 'r';
    }
    else
    {
        comp = 'p';
    }
    //printf("Are you ready to play rock, paper and scissors\n");
    printf("Enter 's' for scissors, 'p' for paper and 'r' for rock\n");
    scanf("%s", &you);

    show(you, comp);
    return 0;
}
