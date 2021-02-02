#include <stdio.h>
int display(int a, int b);

int main(){
int x,y;
scanf("%d %d",&x, &y);
int ans = display( x,y);
printf("%d", ans);
return 0;
}

int display(int a, int b){
int result= a+b;
return result;
}
