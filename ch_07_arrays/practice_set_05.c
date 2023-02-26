#include <stdio.h>
void reversearray(int *ptr)
{

    for (int i = 4; i >= 0; i--)
    {
        printf("%d\n", ptr[i]);
    }
}

int main()
{
    int arr[] = {9, 6, 3, 2};
    printf("the reverse of array is : ");

    reversearray(arr);
    return 0;
}