#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int mjesecno(int x, int y){
	return x*y;
}
int main(){
int a,b,c,d;
printf("Unesi cijenu novog kupljenog hladnjaka\n");
scanf("%d",&a);
printf("Unesi mjesecnu cijenu iznamljenog hladnjaka\n");
scanf("%d",&b);
printf("Unesi koliko traje ljetna sezona (u mjesecima)\n");
scanf("%d",&c);
printf("Ako bi Josip unajmio hladnjak kostalo bi ga %d ,a ako bi kupio novi kostalo bi ga %d\n",mjesecno(b,c),a);
if (mjesecno(b,c)<a)
printf("Josip ce unajmiti hladnjak\n");
else
printf("Josip ce kupiti novi hladnjak\n");
return 0;
}
