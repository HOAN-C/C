#pragma warning(disable:4996)
#include<stdio.h>
int main(){
  int num;
  int i;
  while (1)
  {
    printf("ENTER NUM: ");
    scanf("%d", &num);
    for(i=1; i<10; i++)
    {
      printf("%dX%d=%d",num, i, num*i);
      printf("\n");
    }
  }
  return 0;
}
