
#include <stdio.h>
#include <string.h>
    struct Bookinfo
{
    char bname[100];
    int pages;
    float price;
};
int main()
{
    struct Bookinfo book[100];
    int i, n;
    float max;
    char maxname[100];
    printf("\nEnter number of records you want to enter(less than or equal to:100)");
    scanf("%d", &n);
    fflush(stdin);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the Name of Book : ");
        gets(book[i].bname);
        fflush(stdin); //It is used to clear the input buffer(stdin-Input taken from keyboard)
        printf("\nEnter the Number of Pages : ");
        scanf("%d", &book[i].pages);
        fflush(stdin);
        printf("\nEnter the Price of Book : ");
        scanf("%f", &book[i].price);
        fflush(stdin);
    }
    max = book[0].price;
    strcpy(maxname, book[0].bname);
    for (i = 1; i < n; i++)
    {
        if (book[i].price > max)
        {
            max = book[i].price;
            strcpy(maxname, book[i].bname);
        }
    }
    printf("\n %s is the highest priced book with amount:%f", maxname, max);
    return 0;
}