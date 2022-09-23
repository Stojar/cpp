#include <stdio.h>
#include <stdlib.h>


float trosak_petplate(int N, float X)//definicija funkcije
{
return N*X;
}
int main()
{
    int brPrijatelja;
    float cijena, trosak;

     printf("Unesi broj prijatelja: ");
	scanf("%d", &brPrijatelja);

	printf("Unesi cijenu pretplate: ");
	scanf("%f", &cijena);

	trosak = trosak_petplate(brPrijatelja, cijena), //poziv funkcije
    printf("minimalni trosak pretplate iznosi %.2f", trosak);
    return 0;
}
