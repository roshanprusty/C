#include <stdio.h>

int main()
{
    int i = 34;
    int *ptr = &i;

    char c = 'a';
    char *k = &c;

    float b = 9.6;
    float *r = &b;

    printf("the value of ptr is %u\n", ptr);
    printf("the value of k is %u\n", k);
    printf("the value of r is %u\n", r);

    ptr++;
    ptr++;
    ptr = ptr + 1;

    k++;
    k++;
    k = k + 1;

    r++;
    r++;
    r = r + 1;

    printf("the value of ptr is %u\n", ptr);
    printf("the value of k is %u\n", k);
    printf("the value of ptr is %u\n", r);

   
    return 0;
}