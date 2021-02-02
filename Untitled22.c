//print string

#include <stdio.h>

void printString(char str[]);

int main(){

char s[10];
gets(s);

printString(s);

return 0;
}

void printString(char str[]){
    int i=0;
while(str[i]!='\0'){
    printf("%c",str[i]);
    i++;
}

}
