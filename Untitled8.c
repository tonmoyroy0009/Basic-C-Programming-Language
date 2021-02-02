//switch - case

#include <stdio.h>

int main(){
int a;

scanf("%d",&a);

switch(a){
case 1:
case 2:
case 3:
    printf("press 1 to 3");
    break;
case 4:
case 5:
case 6:
    printf("press 4 to 6");
    break;
default:
    printf("Other");

}

return 0;
}
