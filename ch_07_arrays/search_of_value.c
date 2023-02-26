
#include <stdio.h>

int main()
{
    int array[4] = {1, 2, 23, 4};
    int *a = &array[0];

    int n, flag,i;
    printf("enter the value you need to search \n");
    scanf("%d", &n);

    for ( i = 0; i < 4; i++)
    {
        if (array[i] == n)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("yes this value is present\n");
        printf("this value is present array[%d]\n", i + 1);
    }
    else
    {
         printf("element not found");
       
    }
    
   

    return 0;
}