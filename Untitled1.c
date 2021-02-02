#include <stdio.h>
#include <math.h>

int main (){

/*int x;
float y;
double z;
char c;
printf("Enter a number: ");
scanf("%s",&c);
printf("Number: %s\n", c);
*/

//int x;
//printf("Enter a number: ");
//scanf("%d",&x);
//
//float result = sqrt( 3*pow(x,3)+2*pow(x,2)+4);
//printf("Result: %f", result);

char name[20];

printf("Enter your name: ");
//scanf("%s", name);
gets(name);
printf("Your name is %s.", name);


return 0;
}
