#include <stdio.h>
#include <stdlib.h>


int pronadi(int A[i],int n){

}

int main()
{
    time_t t;
    int n,i;
    int polje[50];
srand((unsigned) time(&t));


printf("kolko os brojeva? (#stoko)");
scanf("%d",&n);

for(i=0;i<n;i++)
    polje[i]=rand()%21+5;


   for(i=0;i<n;i++)
    printf("%d\n",polje[i]);


int index=pronadi(polje,n);


    return 0;
}
