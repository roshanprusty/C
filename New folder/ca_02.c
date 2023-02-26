#include <stdio.h>
void des(int arr[50], int n, int a)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[i] < arr[j])
            {
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
    printf("The numbers arranged in descending order are given below\n");

    for (int i = 0; i < n; ++i)
    {
        printf("%d\n", arr[i]);
    }
}

int main()
{
    int arr[50];
    int n, a, num, i, flag;
    int *ptr = &num;
    printf("enter the size of the array\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("enter the value for arr[%d]\n", i);
        scanf("%d", &arr[i]);
    }

    des(arr, n, a);

    printf("enter the number which you want to search\n");
    scanf("%d", &num);

    for (i = 0; i < n; ++i)
    {
        if (arr[i] == num)

        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("the given number is there\n");
        printf("it is present in array[%d]\n", i);
    }
    else
    {
        printf("the given number %d is not present\n", num);
    }


    return 0;
}