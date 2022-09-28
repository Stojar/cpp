#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int fib(int a, int b, int c){
int f1,f2,f0;
f2=a+b;
 if (c==1||c==2)return 1;
 if (c==3)return f2;
 else return fib(b,f2,c-1);

}
int main (){
int x;
printf("Unesi broj\n");
scanf("%d",&x);
printf("%d",fib(x,x,x));
}
