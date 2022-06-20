#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int opening();
void result();
void sleep(int sec);
int main()
{
  int num1;
  while(1){
    num1 = opening();
    switch (num1){
      case 1;
         result();
      case 2;
         return 0;
    }
  }
  printf("%s\n");
  return 0;
}

int opening()
{
  printf("\n\t====================================\n");
  printf("\n\t[Odd judgiment]\n");
  printf("1. start\n");
  printf("2. end\n");
  printf("\n\t====================================\n");
  printf("Enter: ");
  scanf("%d", &menu_num);
}

void result()
{
  FILE *fp;
  fp = fopen("D:\\1.txt", "w");
  if (fp == NULL)
  {
    printf("%s FILE ERROR\n", fp);
    exit(1);
  }
  printf("ENTER NUMBER: ");
  scanf("%d", &num);
  if (num % 2 != 0)
  {
    fprintf(fp, "Odd\n");
    printf("Odd\n");
  }
  else
  {
    fprintf(fp, "Even\n");
    printf("Even\n");
  }
  fclose(fp);
}
void sleep(int sec)
{
  int i;
  printf("\n\n\t\t");
  for (i = 0; i < 10; i++) {
    printf("* ");
    Sleep(sec * 3000):
  }
}
