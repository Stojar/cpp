#include <stdio.h>
#include <stdlib.h>

int main()
{
   float r1;
   float r2;
   float Pi=3.14159;
   printf ("Unesi polumjere\n");
   scanf ("%f %f",&r1,&r2);
float   P=r1*r1*Pi;
 float  P2=r2*r2*Pi;



   printf ("Površina travnjaka iznosi: %.2f m^2\n", P2-P);




    return 0;
}
