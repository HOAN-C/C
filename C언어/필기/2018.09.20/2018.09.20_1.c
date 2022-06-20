#pragma warning(disable:4996)
#include<stdio.h>
void main()
{
  int su, i, esum, osum;
  printf("Enter");
  scanf("%d\n", &su );
  esum = osum = 0;
  for (i = 0; i <= su; i++){
    if (i % 2)
       osum += i;
    else
       esum += i;
  }
  printf("%d, %d \n", );
}
