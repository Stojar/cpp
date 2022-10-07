#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int kulusic (int x,int y, int z){
if(z<x)
return printf("0");
if(z>=x&&z>(x+y))
return printf("2");
if(z>=x&&z<(x+y))
return printf("1");
}

int main(){
int a,b,c,d;
printf("Unesi cijenu teretane \n");
scanf("%d",&a);
printf("Unesi cijenu privatong trenera \n");
scanf("%d",&b);
printf("Unesi Dominikovbudzet mjesecon \n");
scanf("%d",&c);
kulusic(a,b,c);
}
