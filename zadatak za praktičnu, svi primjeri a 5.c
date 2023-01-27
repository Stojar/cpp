#include <stdio.h>
#include <stdlib.h>

struct gustercic{
      char boja[76];
      int visina;
      int brzina;
      char jedel_muve[10];

};

void print(struct gustercic gs[]){
    int i;
for(i=0;i<6;i++)
    printf("guster koji je: %s boje, visok je ovolko: %d, brzina: %d,je li cudan: %s \n",gs[i].boja, gs[i].visina, gs[i].brzina, gs[i].jedel_muve);

}

void filterBoja(struct gustercic gs[],char odabir[]){
    int i;
for(i=0;i<6;i++)
    if(!strcmp(odabir,gs[i].boja))
        printf("guster koji je: %s boje, visok je ovolko: %d, brzina: %d,je li cudan: %s \n",gs[i].boja, gs[i].visina, gs[i].brzina, gs[i].jedel_muve);

}

void filterMufa(struct gustercic gs[],char odabir[]){
    int i;
for(i=0;i<6;i++)
    if(!strcmp(odabir,gs[i].jedel_muve))
        printf("guster koji je: %s boje, visok je ovolko: %d, brzina: %d,je li cudan: %s \n",gs[i].boja, gs[i].visina, gs[i].brzina, gs[i].jedel_muve);

}

void sortVisina(struct gustercic gs[]){
    int i, j, min_idx;
    struct gustercic temp;

    for (i = 0; i < 5; i++)
    {
        min_idx = i;
        for (j = i+1; j < 6; j++)
          if (gs[j].visina < gs[min_idx].visina)
            min_idx = j;

           if(min_idx != i)
            {
              temp = gs[min_idx];
            gs[min_idx] = gs[i];
            gs[i] = temp;
            }

    }
    print(gs);
}

void sortBrzina(struct gustercic gs[]){
    int i, j, min_idx;
    struct gustercic temp;

    for (i = 0; i < 5; i++)
    {
        min_idx = i;
        for (j = i+1; j < 6; j++)
          if (gs[j].brzina < gs[min_idx].brzina)
            min_idx = j;

           if(min_idx != i)
            {
              temp = gs[min_idx];
            gs[min_idx] = gs[i];
            gs[i] = temp;
            }

    }
    print(gs);
}

int main()
{
    int i;
    char odabir[50];

    struct gustercic gs[6]={"prvena",40,57,"NE",
                            "gulava",65,78,"DA",
                            "crna",12,65,"NE",
                            "tamno_zlena",54,678,"DA",
                            "umrlo_bijela",56,89,"NE"};

    printf("e sad ti jednog gustera ured(color, altitudo, celeritas, jedeli dosadu - DA il NE): \n");
    scanf("%s %d %d %s",gs[5].boja, &gs[5].visina, &gs[5].brzina, gs[5].jedel_muve);

do{
    printf("De mi odaber nes: filter, sort, print, exit\npisi sve malim slovom jer se zbunim na velika\n");
    gets(odabir);
    if(!strcmp(odabir,"print")) print(gs);
    else if(!strcmp(odabir,"filter")){
        printf("Al mogu ja vise filtera: cak 2 (boja, muhe)- koji biste gospodine?\n");
        scanf("%s",odabir);
        if(!strcmp(odabir,"boja")){
            printf("koa boa?\n");
            scanf("%s",odabir);
            filterBoja(gs,odabir);
        } else {
            printf("DA oder NE?\n");
            scanf("%s",odabir);
            filterMufa(gs,odabir);}
    } else if(!strcmp(odabir,"sort")){
        printf("Al mogu ja vise sortiranja: cak 2 (visina, brzina)- koji biste gospodine?\n");
        scanf("%s",odabir);
        if(!strcmp(odabir,"visina")) sortVisina(gs);
        else if(!strcmp(odabir,"brzina")) sortBrzina(gs);
    } else if(!strcmp(odabir,"je li tamno zeleni brz?"))printf("Je, majke mi\n");
    else if(!strcmp(odabir,"glup si"))printf("mama ti\n");
    else printf("Ne kuzim sta oces od mene!!\n\n");
}while(strcmp(odabir,"exit"));


    return 0;
}
