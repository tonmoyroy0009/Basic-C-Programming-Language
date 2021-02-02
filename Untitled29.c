//accessing array elements using pointers

#include <stdio.h>

int main(){

char str[]="hello";

char *ptr;

ptr = str;

int i;
for(i=0; str[i] != '\0' ; i++){
    printf("%c", *(ptr+i));
}



return 0;
}
