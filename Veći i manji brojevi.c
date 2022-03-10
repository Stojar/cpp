#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    printf("Unesi dva broja\n");
    scanf("%d %d",&a,&b);

    if (a>b)
    printf("%d je veci od %d",a,b);

    else
    printf("%d je veci od %d",b,a);
    return 0;
}
