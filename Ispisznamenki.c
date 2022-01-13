#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A;
    printf ("Unesi šesteroznamenkasti broj\n");
    scanf ("%d",&A);

    int zbrajanje = A%10+(A/10)%10+(A/100)%10+(A/1000)%10+(A/10000)%10+(A/100000)%10+(A/1000000);
    printf ("%d", zbrajanje);

    return 0;
}
