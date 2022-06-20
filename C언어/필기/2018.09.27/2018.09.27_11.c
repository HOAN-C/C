#pragma warning(disable:4996)
#include<stdio.h>
int score(int C, int python)
{
  int tot, ave;
  tot = C + python;
  ave = tot/2;
  printf("total:%d\nave:%d", tot, ave);
}

int main(){
  int Y;
  Y = score(90, 95);
  printf("%d", Y);
}
