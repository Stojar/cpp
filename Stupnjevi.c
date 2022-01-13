#include <stdio.h>
#include <stdlib.h>

int main()
{
    float F;
    float C;
    float K;
    printf ("Unesi stupnjeve za Fahrenheite\n");
    scanf ("%f",&F);

    C=((float)F-32)*9/5;
    K=C+273.15;

    printf ("Pretvorba Fahrenheita u Celzijeve stupnjeve iznosi: %.2f\n",C);
    printf ("Pretvorba Celzijeve stupnjeve u Kelvine iznosi: %.2f\n",K);


    return 0;
}
