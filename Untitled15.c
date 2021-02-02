//recursion without for loop

#include <stdio.h>
int series(int n);
int main(){

int x;

printf("Enter the recursion number: ");
scanf("%d", &x);

printf("Ans: %d", series(x));

return 0;
}

int series(int n){
    if(n==1)
        return 1;
    else
        return n + series(n - 1);

}
