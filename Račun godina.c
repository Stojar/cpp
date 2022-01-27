#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a;
   int b;

   printf("Unesi godine oca i sina\n");
   scanf ("%d %d",&a,&b);

   printf("%d godina\n",abs(a-2*b));
}
