#include <stdio.h>
#include <stdlib.h>
 int sum(int a){

return a==1?1:a+sum(a-1);// ta se petlja vrti sve dok broj nije 1, npr ako stavis broj 6 pisat æe 6+5+4+3+2+1=21//

 }

int main()
{
    int n;
    printf("Unesi neki broj\n");
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}
