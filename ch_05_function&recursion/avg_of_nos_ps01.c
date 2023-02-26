#include<stdio.h>
float average (int a,int b ,int c);

int main(){
    float n;
    n = average (9,5,6);
    printf ("the average value of 3 nos is %f\n",n);

return 0;
}
float average (int a,int b ,int c){
    float i = (float)(a + b + c) /3 ; //type casting
    return i;
}

