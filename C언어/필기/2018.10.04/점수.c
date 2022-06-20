#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
  char Maj[50], Num[50], Name[50];
  int KOR, ENG;
  int sum = 0, ave = 0;
  printf("Major:");
  scanf("%s", &Maj);
  printf("Number:");
  scanf("%s", &Num);
  printf("Name:");
  scanf("%s", &Name);
  printf("KOREAN:");
  scanf("%d", &KOR);
  printf("ENG:");
  scanf("%d", &ENG);
  sum = KOR + ENG;
  ave = sum/2;

  printf("------------------------------------------\n");
  printf("%s, %s, %s, %d, %d\n", Maj, Num, Name, ave, sum);
  printf("------------------------------------------");
}
