#include <stdio.h>
#include <stdlib.h>

float pare(int x, float y){
	return x+0.5*y;
}
int main(){

	int a;
	float b;
	float c;
	printf("koliko ima kovanica od 1kn \n");
	scanf("%d", &a);
	printf("koliko ima kovanica od 0.5kn \n"),
	scanf("%.2f", &b);

	c=pare(a,b);

	printf("%f",c);

	return 0;
	}
