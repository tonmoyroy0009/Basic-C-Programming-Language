//file

#include <stdio.h>

int main(){

    FILE *fp;

    char str[] = "Tonmoy is a good boy.";

    fp = fopen("test.txt","w");

    fprintf(fp, str);

    fclose(fp);

    return 0;
}
