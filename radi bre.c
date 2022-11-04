#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int pronadi(int A[],int n){

int i;
for(i=0;i<n;i++)
if(A[i]%3==0) return i;
return -1;
}
int pronadi2(int A[],int n, int start){

int i;
for(i=start;i<n;i++)
if(A[i]%5==0) return i;
return -1;
}
int main()
{
    time_t t;
    int n,i;
    int polje[50];
srand((unsigned) time(&t));


printf("kolko os brojeva? \n");
scanf("%d",&n);

for(i=0;i<n;i++)
    polje[i]=rand()%21+5;


   for(i=0;i<n;i++)
    printf("%d  ",polje[i]);


int index=pronadi(polje,n);
int index2=pronadi2(polje,n,index);
printf("%d\n",index);

for(i=index;i<=index2;i++)
    printf("%d  ",polje[i]);
    return 0;
}
