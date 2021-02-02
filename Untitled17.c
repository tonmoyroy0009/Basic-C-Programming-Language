//recursive method

#include <stdio.h>
int factorial (int n);

int main(){
int x;
printf("Enter Number: ");
scanf("%d",&x);

int ans = factorial(x);
printf("Answer: %d",ans);
return 0;
}

int factorial(int n){
if(n==1)
    return 1;
else if(n==0)
    return 0;
else
    return n * factorial(n-1);


}

