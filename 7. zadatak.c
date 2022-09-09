#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int K;

    printf("Unesi broj prijatelja\n");
    scanf("%d",&N);
    printf("Unesi broj karata\n");
    scanf("%d",&K);

    if(N>K)
        printf("Nema dovoljno karti za sve prijatelje\n");
    if(N<K)
        printf("Svi prijatelji mogu posjetiti sajam");

    return 0;
}
