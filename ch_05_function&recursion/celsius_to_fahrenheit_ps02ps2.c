#include <stdio.h>
int fahrenhiet( int celsius);
// fahrenhiet formula = (0°C × 9/5) + 32 = 32°F

int main()
{
    int c;
    printf("enter the tempreature in celsius\n");
    scanf("%d",&c);

    fahrenhiet(c);
    printf("the tempreature in fahrenhiet is %d", fahrenhiet(c));

    return 0;
}

int fahrenhiet( int celsius) //if you want to put any value in your result formula than follow this step
{
    int result;
    result = celsius*(9 / 5) + 32; 
    return result;
}