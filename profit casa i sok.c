#include <stdio.h>
#include <stdlib.h>
float profit(float x)
{

x = x*(50-50*0.2-50*0.2-50*0.3);
return x;
}
int main()
{
  int N;
  printf("Unesi b. b.b..broj casa\n");
  scanf("%d",&N);
  printf("profit je %.2f",profit(N));

    return 0;
}
