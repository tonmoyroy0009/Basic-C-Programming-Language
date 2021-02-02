#include <stdio.h>
#include <math.h>
#define PI 3.1416

int main(){
//float const PI = 3.1416;
float radius, area, circumference, diameter;

printf("Enter the radius of a circle: ");
scanf("%f",&radius);

circumference = 2*PI* radius;
area = PI * pow(radius, 2);
diameter = 2 * radius;

printf("Diameter: %f\n", diameter);
printf("Area: %f\n", area);
printf("Circumference: %f\n",circumference);

return 0;
}
