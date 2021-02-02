#include <stdio.h>

void printString(char s[]);

int main (){

char str[20];

gets(str);
printString(str);

return 0;
}

void printString(char s[]){

int i=0;

while(s[i] != 0){   // NULL = '\0' = 0 //
    printf("%c",s[i]);
    i++;
}

}
