#include <stdio.h>
#include <string.h>

int main (){

char str1[20];
char str2[20];
char str3[20];

int len, cmp;

gets(str1);
gets(str2);

len = strlen(str1);
printf("Length: %d\n", len);

//strcpy(str1,str2);
//printf("String copy: %s\n",str1);

//strcat(str1,str2);
//puts(str1);

cmp = strcmp(str1,str2);
printf("Compare: %d",cmp);

return 0;
}
