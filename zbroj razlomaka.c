#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a;
    int b;
    int c;
    int d;

    printf ("Unesi brojnik i nazivnik prvog broja pa zatim brojnik i nazivnik drugog broja\n");
    scanf ("%d %d %d %d",&a,&b,&c,&d);
    int y=b==d?b:b*d;
    int x=b==d?a+c:a*d+c*b;
    printf ("Rezultat iznosi: %d / %d\n",x,y);
    printf ("Rezultat iznosi: %.2f",(float)x/y);

    return 0;
}
