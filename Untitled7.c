//IF Else

#include <stdio.h>

int main(){
int a;

printf("Enter your number: ");
scanf("%d",&a);

if(a>=80 && a<=100){
    printf("Your grade A+");
}else if(a>=70 && a<=79){
    printf("Your grade A");
}else if(a>=60 && a<=69){
    printf("Your grade B");
}else if(a>=50 && a<=59){
    printf("Your grade C");
}else if(a>=40 && a<=49){
    printf("Your grade D");
}else{
    printf("Your grade F");
}

return 0;
}
