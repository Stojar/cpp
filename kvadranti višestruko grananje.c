#include <stdio.h>
#include <stdlib.h>

int main (){
{
    int a;
    printf("Unesi broj kvadranta\n");
    scanf("%d",&a);

    if (a==1)
    printf("x je pozitivan, a y je pozitivan");

    else if (a==2)
        printf("x je negativan, a y je pozitivan");
        else if (a==3)
        printf("x je negativan, a y je negativan");
            else if (a==4)
                printf("x je pozitivan, a y je negativan");
                  else
                    printf("Krivi unos");
}
    return 0;
}
