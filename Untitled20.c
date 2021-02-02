//array function

#include <stdio.h>

double getAverage(int array[], int size);

int main(){

int n;
printf("Enter the size: ");
scanf("%d",&n);
int a[n];

printf("Enter the numbers: \n");
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}

double ans = getAverage(a,n);
printf("Average: %.2lf",ans);

return 0;
}

double getAverage( int array[], int size){
    int sum=0;

    for(int i=0;i<size;++i){
        sum = sum + array[i];
    }
    return sum/size;
}



