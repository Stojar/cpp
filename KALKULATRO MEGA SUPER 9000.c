#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float calc (float a, char o, float b){
if (o=='*')
return a*b;
else if (o=='-')
	return a-b;
		else if (o=='+')
			return a+b;
			else if (o=='/')
				return a/b;
}
int main(){
float x,z;
char y;
printf("Unesi prvi broj\n");
scanf("%f",&x);
printf("Unesi operatora\n");
scanf(" %c",&y);
printf("Unesi drugi broj\n");
scanf("%f",&z);
printf("%.2f",calc(x,y,z));
    return 0;
}
