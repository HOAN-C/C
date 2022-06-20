#pragma warning(disable:4996)
#include<stdio.h>
int voidprintsumandaverage(int x, int y)
{
  int tot, ave;
  tot = x + y;
  ave = tot / 2;
  printf("Totla: %d, Average: %d",tot, ave);
}

int main(){
  int A=0, B=0;
  printf("A:");
  scanf("%d", &A);
  printf("B:");
  scanf("%d", &B);
  voidprintsumandaverage(A, B);

  return 0;
}
