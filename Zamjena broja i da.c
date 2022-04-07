#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,sum=0;
    printf("Unesi dugacak broj\n");
    scanf("%d",&n);

    while (n){
    m=m*10+n%10;
    n/=10;
    }
    while (m){
    scanf("%d",&n);
    sum+=n*(m%10);
    m/=10;
    }
    printf("%d",sum);
    return 0;
}
