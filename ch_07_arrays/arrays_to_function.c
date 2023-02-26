#include <stdio.h>
void printarray(int n, int *ptr)
{
    for (int a = 0; a < n; a++)
    {
        printf("the value of element %d is %d\n", a + 1, *(ptr + a));
        //   *(ptr + a) or you can write also ptr[a]
        //ptr[2]=55   if we write this, ptr2 value will change
    }
}

int main()
{
    int arr[] = {96, 42, 63, 25, 91};
    printarray(5, arr);

    return 0;
}
