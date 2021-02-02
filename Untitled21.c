//2d array function

#include <stdio.h>

void function(int array[][column],int row, int column);

int main(){

int r,c;
printf("Enter row: ");
scanf("%d",&r);

printf("Enter column: ");
scanf("%d",&c);

int a[r][c];
printf("Enter the elements of array: \n");
for(int i=0;i<r;i++){
for(int j=0;j<c;j++){
    printf("A[%d][%d] = ",i,j);
    scanf("%d",&a[i][j]);
}
}
function(a,r,c);


return 0;
}


void function(int array[][column], int row, int column){

printf("You have entered: \n");
int a,b;
for(a=0;a<row;a++){
  for(b=0;b<column;b++){
        printf("%10d",array[a][b]);
    }
    printf("\n");
}

}

