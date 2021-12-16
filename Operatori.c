#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x=4;
    int y=10;

    int a=x+y;
    int b=x-y;
    int c=x*y;
    int d=x/y;
    int e=x%y;

    printf ("Zbrajanje = %d\n",a);
    printf ("Oduzimanje = %d\n",b);
    printf ("Množenje = %d\n",c);
    printf ("Dijeljenje = %d\n",d);
    printf ("Ostatak cjelobrojnog dijeljenja = %d",e);
    return 0;
}
