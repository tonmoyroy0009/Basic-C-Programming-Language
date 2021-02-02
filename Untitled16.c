//factorial non recursive method

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
int f = 1;
if(n==0)
    return 0;
else{
for(int i=n;i>=1;i--){

    f = f * i;
}
return f;
}
}
