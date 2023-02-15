#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct stablo_jabuka{
int visina;
int prosjecan_broj;
int trenutno_jabuka;
};

void dodaj_u_dat(struct stablo_jabuka sj){
FILE*filePointer;
filePointer=fopen("stablo_jabuka.txt","a");
fprintf(filePointer,"%d\t%d\t%d\n",sj.visina,sj.prosjecan_broj,sj.trenutno_jabuka);
fclose(filePointer);
}
void ukupno(){
FILE*filePointer;
filePointer=fopen("stablo_jabuka.txt","r");
int sum=0;
int a,s,c;

while(fscanf(filePointer,"%d %d %d",&a, &s, &c)==3)
    sum+=c;

printf("Ukupan broj jabuka je %d\n",sum);
fclose(filePointer);
}

int main()
{
    int i;
    char odg[5];
    struct stablo_jabuka sj;

    do{
    printf("unesi visinu stabla, prosjecan broj neceg  i koliko trenutacno ima jabuka\n");
    scanf("%d %d %d",&sj.visina, &sj.prosjecan_broj, &sj.trenutno_jabuka);
    dodaj_u_dat(sj);
    ukupno();
    printf("Ocemo opet??");
    scanf("%s",odg);
    }while(strcmp(odg,"ne"));
    return 0;


}
