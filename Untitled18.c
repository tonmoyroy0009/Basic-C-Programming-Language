//sum of natural number using recursion

#include <stdio.h>
int sum(int n);
int main(){
int x;
printf("Enter Number: ");
scanf("%d",&x);

int ans = sum(x);
printf("Answer: %d",ans);

return 0;
}

int sum(int n){
if(n!=0)
    return n + sum(n-1);
else
    return n;

}
