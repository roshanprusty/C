#include <stdio.h>
float force(float mass);

int main()
{
    float m;
    printf("enter the value of mass\n");
    scanf("%f", &m);

    
    printf("the force is %.2f\n",force(m));
      // %.2f means upto which decimal place you want

    return 0;
}
float force(float mass)
{
    float result = mass * 9.8;
    return result;
}