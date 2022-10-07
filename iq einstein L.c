#include <stdio.h>
#include <stdlib.h>
int intelegence(int x){
return (x+7)>170;
}
int main()
{
   int x;
   scanf("%d",&x);
   printf(intelegence(x)?"Moze":"ne moze");
    return 0;
}
