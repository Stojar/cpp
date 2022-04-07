#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k,i;
    int min=15;
    printf("Unesi kat na kojem se Francek nalazi\n");
    scanf("%d",&n);
    printf("Unesi koliko ima stanara u hotelu\n");
    scanf("%d",&k);

    while (k){
     scanf("%d",&i);
     min=abs(n-i)<min?abs(n-1):min;
     k--;

    }
    printf("%d",i);
    return 0;
}
