//input from file then output file

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
    fclose(fp);

    fp = fopen("output.txt","a");
    for(i=0;i<n;i++){
        fprintf(fp,"%s = ",p[i].name);
        fprintf(fp,"%.2f\n",p[i].height);
    }
    fclose(fp);

    return 0;
}
