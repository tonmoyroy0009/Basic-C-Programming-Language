//passing array to function using pointer

#include <stdio.h>

void printNum(int *ptr, int len);

int main(){

int a[4] = {4, 10,1 ,5};
printNum(a,4);

return 0;
}

void printNum(int *ptr, int len){
int i;

for(i=0;i<len;i++){
    printf("*(ptr+%d) = %d\n",i ,*(ptr+i));
}

}
