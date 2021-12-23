#include <math.h>
#include <stdio.h>


int main()
{
    int F1;
    int F2;
    int F;
    printf ("Unesi dvije sile\n");
    scanf ("%d %d",&F1,&F2);

    printf ("Rezultantna sila ukoliko su sile u istom smjeru iznosi: %d N\n",(F1+F2));
    printf ("Rezultantna sila ukoliko su sile u suprotnom smjeru iznosi: %d N\n",(F1-F2));
    printf ("Rezultantna sila ukoliko su sile u pravom kutu iznosi: %.3f N\n",(float)sqrt(F1*F1+F2*F2));
    return 0;
}
