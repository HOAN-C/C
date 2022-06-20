#pragma warning(disable:4996)
#include<stdio.h>
int main(){
  int ENG[10], KOR[10];
  int sum = 0, ave = 0;

  printf("ENG:");
  scanf("%d",&ENG[0]);

  printf("KOR:");
  scanf("%d",&KOR[0]);

  sum = ENG[0] + KOR[0];
  ave = sum/2;


  printf("Total:%d\n", sum);
  printf("Score:");
  if (ave > 90)
  {
    printf("A");
  }
  else if (ave > 80)
  {
    printf("B");
  }
  else
  {
    printf("F");
  }
}
