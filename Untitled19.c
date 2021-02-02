//sum of digits using recursion

#include <stdio.h>
int sum(int n);

int main(){
int x;

printf("Enter a number: ");
scanf("%d",&x);

int ans = sum(x);
printf("Answer: %d", ans);

return 0;
}
int r, s = 0;
int sum(int n){

if(n!= 0){
    r = n%10;
    s = s + r;
    sum(n/10);
}
else
    return s;
}
