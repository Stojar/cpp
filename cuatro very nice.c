#include <stdio.h>
#include <stdlib.h>


int oduzimanje (int x){
	return 100-x;
}

int main(){
int a,b,c,d;
printf("Koliko su kostale stvari koje je lovro kupio\n");
scanf("%d",&a);
printf("Lovro ce dobiti natrag %d eura\n",oduzimanje(a));
return 0;

    return 0;
}
