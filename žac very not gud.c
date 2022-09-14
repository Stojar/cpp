#include <stdio.h>
#include <stdlib.h>

int pola (int x){
	return x*0.5;
}
int mnozenje (int z, int y){
	return z*y;
}
int main(){
int a,b;
printf("Unesi koliko je Zeljko dobio kovancia od 1 kn\n");
scanf("%d",&a);
printf("Unesi koliko Zeljko dobio kovanica od 0.5 kn\n");
scanf("%d",&b);
printf("zaradio je %d kn od kovancia od 1kn i %d kn od kovanica od 0.5kn a ukupno ima %d kn",a,pola(b),mnozenje(a,b));
return 0;
}
