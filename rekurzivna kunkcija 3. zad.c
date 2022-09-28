#include <stdio.h>
#include <stdlib.h>
int sum(int n){

 return n==2?2:n*sum(n-1);
}
int main()
{
    int a;
    printf("Unesi JEDAN broj lijepi\n");
    scanf("%d",&a);
    printf("%d",sum(a));
    return 0;
}
