#include <stdio.h>
void printadd (int a)
{
    printf("the address of i is %u\n", &a);
}

int main()
{
    int i =4;
     printadd (i);
     printf("the adress of variable i is %u \n",&i);
     return 0;


}
