#include<stdio.h>
#include <math.h>

int main(){
    
//V=πr2h (volume of a cylinder)
//C = 2πr (circumfernce of a cylinder)

/*If the cicumference of a cylinder means 
the circumference of its cross-section (a circle),
 then it will be nothing different from the same formula for
finding the circle, thus circumference = 2πr.
 where r is the radius of the cross-section of the cylinder.*/


// diameter = 2r (from here we can get radius)

float d,h;
printf("enter the diameter of cylinder\n");
scanf("%f",&d);
printf("enter the height of a cylinder\n");
scanf("%f",&h);

float radius =d/2;
float volume =3.14*pow(radius,2)*h;
float circumference =2*3.14*radius;

printf("the radius of a cylinder according to your data is %.2f\n",radius);
printf("the volume of a cylinder according to your data is %.2f\n",volume);
printf("the circumference of a cylinder according to your data is %.2f\n",circumference);
return 0;
}