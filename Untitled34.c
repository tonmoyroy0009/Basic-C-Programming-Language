//input from file and show it on consol

#include <stdio.h>

struct person{
    char name[20];
    float height;

};

int main(){

    FILE *fp;

    fp = fopen("file.txt", "r");
    int n;
    fscanf(fp,"%d",&n);

    struct person p[n];

    int i;
    for(i=0;i<n;i++){
        fscanf(fp,"%s",p[i].name);
        fscanf(fp,"%f",&p[i].height);
    }

    for(i=0;i<n;i++){
        printf("%s = %.2f\n",p[i].name, p[i].height);

    }

    fclose(fp);

    return 0;
}
