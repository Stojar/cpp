#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,dist,x=1,y=2,sum=0;
    printf("Unesi broj gradova\n");
    scanf("%d",&n);

    while(n-1){
        n--;
        printf("Unesi udaljenost izmedu %d i %d grada\n",x++,y++);
        scanf("%d",&dist);
        sum+=dist;
    }
    printf("%d",sum);
    return 0;
}
