#include <stdio.h>
void wrong_swap(int a, int b);
void swap(int *a, int *b);

int main()
{
    int x = 3, y = 4;

    printf("the value of x and y before swap is %d and %d\n", x, y);

    wrong_swap(&x, &y);  //wrong_swap will not work due to call bye value
                         // the value is not changing becoz even after changing the value of x and y 
                         //in function defination nothing will change in function calll

    printf("the value of x and y after swap is %d and %d\n", x, y);

    swap(&x, &y);    //wrong_swap will work due to call bye refernce

    printf("the value of x and y after swap is %d and %d\n", x, y);

    return 0;
}
void wrong_swap(int a, int b)
{
    int temp;
    temp = b;
      a = b;  
}
void swap(int *a, int *b)
{
    int temp;
    *a = *b;
    temp = *b;
}