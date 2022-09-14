#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int mnozenje (int x, int y){
	return x*y;
}
int racunanje (int z){
	return z*7.52;
}
int main (){
	int a,b,c;
	printf("Unesi broj prijatelja \n");
	scanf("%d",&a);
	printf("Unesi cijenu pretplate\n");
	scanf("%d",&b);
	printf("Najmanja cijena iznosi %d u eurima a %d u kunama\n", mnozenje(a,b), racunanje(mnozenje(a,b)));
	return 0;
}
