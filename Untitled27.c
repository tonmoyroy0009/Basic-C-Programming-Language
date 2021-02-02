//pointer

#include <stdio.h>

int main(){

int c;
int *pc;

c = 22;

pc = &c;

printf("%d\n",pc);
printf("%d\n",*pc);
printf("%d\n",c);
printf("%d\n",&c);
printf("%d\n",&pc);



return 0;
}
