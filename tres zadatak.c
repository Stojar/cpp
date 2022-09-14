#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int mnozenje (int x){
	return x+3;
}
int main()
{
    int a,b=10,c=3;
    printf("Unesi u koliko sati pocinje raditi na zadatcima\n");
    scanf("%d",&a);

    if (mnozenje(a)>10)
        printf("Nece stici na vrijeme\n");
        else
        printf("Stigne rijesti sve zadatke na vrijeme\n");


    return 0;
}
