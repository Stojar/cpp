#include <stdio.h>
#include <stdlib.h>

int main (){
{
    int a;
    printf("Unesi broj kvadranta\n");
    scanf("%d",&a);

    switch (a)
        case 1:
            printf("x je pozitivan, a y je negativan");
            break;
        case 2:
            printf("x je negativan, a y je pozitivan");
            break;
        case 3:
            printf("x je negativan, a y je pozitivan");
            break;
        case 4:
            printf("x je pozitivan, a y je negativan");
            break;
        default ("Krivi unos");

    return 0;
}
