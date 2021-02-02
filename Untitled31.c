#include <stdio.h>

struct employee{
    char name[20];
    int salary;

};

int main(){

int n;
printf("Enter the number of employees: ");
scanf("%d",&n);

struct employee em[n];
printf("\n");
int i;
for(i=1;i<=n;i++){
    printf("Enter %d number employee name: ",i);
    scanf("%s", em[i].name);

    printf("Enter %d number employee salary: ",i);
    scanf("%d", &em[i].salary);
}

printf("\n\n");

for(i=1;i<=n;i++){
    printf("%s = %d\n", em[i].name , em[i].salary);
}

return 0;
}
