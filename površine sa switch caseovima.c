#include <stdio.h>
#include <stdlib.h>

int main()
{

 printf(" -------------------------------\n");
 printf("|\t\t\t\t|\n");
 printf("|\t 1. Kvadrat\t\t|\n");
 printf("|\t 2. Pravokutnik\t\t|\n");
 printf("|\t 3. Krug\t\t|\n");
 printf("|\t\t\t\t|\n");
 printf(" -------------------------------\n");

 int a;
 int b;
 float r;
 int opcije;
 printf("Odaberi jednu opciju\n");
 scanf("%d",&opcije);

 switch (opcije){
    case 1:
 printf("Unesi stranicu kvadrata\n");
 scanf("%d",&a);
 a=a*a;
 printf("Povrsina kvadrata je %d",a);
 break;
    case 2:
 printf("Unesi stranice pravokutnika\n");
 scanf("%d %d",&a,&b);
 printf("Povrsina pravokutnika je: %d",a*b);
 break;
    case 3:
 printf("Unesi promjer kruga\n");
 scanf("%f",&r);
 printf("Povrsina kruga je: %.2f",(float)r*r*3.14);
 break;
default: ("krivi unos\n");
    return 0;
 }}
