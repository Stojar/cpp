#include <stdio.h>
#include <stdlib.h>
int nextgen(int A,int B, int X, int Y){
    return X*Y>A*B;
}
int main()
{
   int a,b,c,d;
   printf("Unesi koliko treba jedinica energija za grad\n");
   scanf("%d",&a);
   printf("Unesi broj godina\n");
   scanf("%d",&b);
   printf("koliko grama bato\n");
   scanf("%d",&c);
   printf("koliko grama proizvodi helij-3 gg\n");
   scanf("%d",&d);

   printf(nextgen?"Hoce":"nece");

    return 0;
}
