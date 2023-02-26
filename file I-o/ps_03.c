#include <stdio.h>

int main()
{
    FILE *ptr;
    FILE *fptr;
    ptr = fopen("a.txt", "r");
    fptr = fopen("b.txt", "w");
    char c = fgetc(ptr);

    while (c != EOF)
    {
        fputc(c, fptr);
        fputc(c, fptr);
        c = fgetc(ptr);

        //c = fgetc(ptr);
    }

    fclose(ptr);
    fclose(fptr);
    printf("NOW YOU CAN CHECK");

    return 0;
}