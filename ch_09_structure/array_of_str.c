#include <stdio.h>
struct car
{
    char name[50];
    int seats;
    float price;
};
int main()
{
    int i, n;
    struct car myCar[100];
    printf("\n Enter the number of cars:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\n\nEnter data for car[%d]:\n", i);
        scanf("%s %d %f", myCar[i].name, &myCar[i].seats, &myCar[i].price);
    }

    for (i = 0; i < n; i++)
    {
        printf("\nData about your car[%d] is: %s %d %.2f", i, myCar[i].name, myCar[i].seats, myCar[i].price);
    }
}