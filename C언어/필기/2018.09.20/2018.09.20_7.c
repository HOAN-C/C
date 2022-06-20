#pragma warning(disable:4996)
#include<stdio.h>
void main(){
  int a = b = 0;
  int c, d, e, f;
  while (a<=2)
  {
    a++
    for (c=3-a; c>0; c--)
    {
      printf("  ");
    }
    for (d=1; d<2*a; d++)
    {
      printf("*");
    }
    printf("\n");
  }
}
