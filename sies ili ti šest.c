#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int math (int x, int y){
	return y-x;
}

int main (){
int a,b,c,d;

printf("Unesi koliko ima vojnika\n");
scanf("%d",&a);
printf("Unesi koliko ima oruzja\n");
scanf("%d",&b);

c=math(a,b);
if (c>(a/2))
printf("Vojnici su spremni za bitku\n");
else
printf("Vojnici nisu spremni za bitku\n");
}
