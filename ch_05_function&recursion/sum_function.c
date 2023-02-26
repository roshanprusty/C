#include <stdio.h>
// sum is a function which takes a and b as input and return integer as an output
int sum(int a, int b); // function prototype declaration

int main()
{
    int c;
    c = sum(2, 15); // function call
    printf("the value of c is %d\n", c);

    return 0;
}
int sum(int a, int b)
{
    int result;  //dont become confuse becoz here you can take any variable name 
    result = a + b;  //it is totally different frain function or hence you can take c also
    return result;
}
