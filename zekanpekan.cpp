#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<conio.h>

struct zeko{
    int masa;
	int kolicina_hrane;
	int darezljivost;
	char ime[50];
	}z;
	
	void unos(){

	FILE*filePointer;
	filePointer=fopen("zeko.txt","a");

	printf("How heavy little bunny?\n");
	scanf("%d", &z.masa);
	printf("koliko pojede mali zeko?\n");
	scanf("%d", &z.kolicina_hrane);
	printf("kolika je darezljivost zekana?\n");
	scanf("%d", &z.darezljivost	);
	printf("ime zekanapekana?\n");
	scanf("%s", z.ime);

	fprintf(filePointer, "%d, %d, %d, %s \n", z.masa, z.kolicina_hrane, z.darezljivost, z.ime);
	fclose(filePointer);
}
	
	void ispis(){

	FILE*filePointer;
	filePointer=fopen("zeko.txt","r");

	while(fscanf(filePointer, "%d, %d, %d, %s", &z.masa, &z.kolicina_hrane, &z.darezljivost, z.ime)==4){
            printf("%d, %d, %d, %s\n\n", z.masa, z.kolicina_hrane, z.darezljivost, z.ime);
	}
    



	fclose(filePointer);
}
	int main(){
	
	   char odabir;

do{

    printf("1. Unos \n");
    printf("2. Ispis\n");
    printf("3. Hitler\n");
    printf("4. Komb odabir\n");
    printf("5. Max i min\n");
    printf("6. exit\n");

    odabir=getch();

    switch (odabir){
    	case '1': unos();
    	break;
    	case '2': ispis();
    	break;
	 }
}while (odabir!='6');



	
	}
