#include <stdio.h>
#include <stdlib.h>

int main()
{
   int cijena;
   int popust;
   int cijena_odmora;
   printf("Unesi cijenu, popust i cijenu odmora\n");
   scanf("%d %d %d",&cijena,&popust,&cijena_odmora);

   printf("%d\n",(cijena_odmora *100)/(cijena*popust));
    return 0;
}
