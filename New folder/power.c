#include<stdio.h>


int cube(int s);


int main(){
    int n;
    printf("enter the number\n");
    scanf("%d",&n);

    printf ("the cube of a given number is %d",cube( n));

return 0;
}
int cube(int s)
{
 int result = pow(s,3);
 return result;
}

