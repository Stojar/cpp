#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int p;
    int sum;
    printf("Unesi broj\n");
    scanf("%d",&a);

    b=a%10;

    while(a>10){
        a/=10;
    }
    p=a;
    sum=p+b;

    printf("suma znamenki je %d\n",sum);


    return 0;
}

