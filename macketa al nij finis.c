#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct mackick{
    int br_zivota;
    int br_nogu;
    int visina;
    char ime[10];
}m;

void nova(){

	FILE*filePointer;
	filePointer=fopen("macketa.txt","a");

	printf("kolika ima lajfova mica?");
	scanf("%d", &m.br_zivota);
	printf("How much nogu posjeduje");
	scanf("%d", &m.br_nogu);
	printf("Koje li je bolje okolokucno mjaukalo?");
	scanf("%d", &m.visina);
	printf("ime stvorenja?");
	scanf("%s", m.ime);

	fprintf(filePointer, "%d, %d, %d, %s", m.br_zivota, m.br_nogu, m.visina, m.ime);

fclose(filePointer);
}


void maks(){

	FILE*filePointer;
	filePointer=fopen("macketa.txt","a");
	char BrtMrcinaOdMackeBolam[10]="mica";
	int max=0;
	while(fscanf(filePointer, "%d %d %d %s", &m.br_zivota, &m.br_nogu, &m.visina, m.ime)==4){
		if(m.br_zivota>max){
			max=m.br_zivota;
			strcpy( BrtMrcinaOdMackeBolam, m.ime );
		}

	}
	printf("najjakija je %s",BrtMrcinaOdMackeBolam);


	fclose(filePointer);
}



int main()
{

char odabir[10];
do{

	printf("|\t 1. unesi novu kornjacu \t|")
	printf("|\t 2.max \t\t\t|")
	printf("|\t 3.min\t\t\t|")
	printf("|\t 4.ispis all\t\t\t|")
	printf("|\t 5.Exit\t\t\t|")

} while (odabir!=5)







    return 0;
}
