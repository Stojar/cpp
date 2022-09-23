#include <stdio.h>
#include <stdlib.h>


float trosak_petplate(int N, float x) //definicija funkcije
{
return N*x;
}
void trosakPretplate2(int *N, float *x, float *rez)
{
   *rez=*N * *x;
}
/*float trosak_petplate3(int N, float x=15.99)//definicija funkcije
  {
      return n*x

      }*/

{
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

    trosakPretplate2(&brPrijatelja, &cijena, &trosak);
     printf("minimalni trosak pretplate iznosi %.2f", trosak);

     //trosak = trosakpretplate(brPrijatelja);
     // poziv funkcije a zadanim argumentom
    return 0;

}
