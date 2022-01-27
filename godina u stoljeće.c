#include <stdio.h>
#include <stdlib.h>

int main()
{
   int godina;
   printf("Unesi godinu\n");
   scanf("%d",&godina);

   printf("%d stoljece\n",(godina-1)/100+1);
    return 0;
}
