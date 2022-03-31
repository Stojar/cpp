#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

	int n,masa,count=1;
	int sum=0;

	printf("Unes broj jabuka\n");
	scanf("%d",&n);

	while(n>0){
		printf("Unesi masu jabuke\n");
		scanf("%d",&masa);
		n--;
		if(sum+masa>1000){
			sum=masa;
			count++;
		}
		else sum+=masa;
}



	printf("Potrebno nam je gomilu sanduka, tocnije %d", count);
        return 0;
}
