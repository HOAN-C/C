#pragma warning(disable:4996)
#include<stdio.h>
int pac(int a)
{
  int sum = 0;
  while (a!=0)
  {
    sum = sum + a;
    a--;
  }
  printf("%d",sum);
}

int main()
{
  int y;
  y = pac(10);
}
