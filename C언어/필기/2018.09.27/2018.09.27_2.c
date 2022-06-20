#pragma warning(disable:4996)
#include<stdio.h>
void main(){
  char maj[50], num[50], name[50], mark;
  int k=0, e=0, t=0, a=0;
  printf("Major, Number, Name, KOR, ENG\n");
  scanf("%s %s %s %d %d", &maj, &num, &name, &k, &e);
  t = k + e;
  a = t / 2;
  if (a>=90){
    mark = 'A';
  }
  else if (a >= 80){
    mark = 'B';
  }
  else{
    mark = 'F';
  }

  printf("-------------------------------\n");
  printf("Major, Number, Name, KOR, ENG, TOT, AVE, MARK\n");
  printf("%s     %s      %s    %d   %d   %d   %d   %c \n", maj, num, name, k, e, t, a, mark);
}
