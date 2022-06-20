#define _CRT_CECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

struct student {
  char name[20];
  int GPA;
};

int main()
{
  struct student [SIZE];
  int i, u;
  FILE * fp; //파일 변수
  fp = fopen("D:\\1.txt", "r");
  if (fp == NULL){
    printf("\nFAIL TO OPEN\n");
    exit(1);
  }
  for (i = 0; i < SIZE; i++) {
    fscanf(fp,"%s, %d", s[i].name, s[i].GPA);
    printf("%s %d", s[i].name, s[i].GPA);
  }
  fclose(fp);

  fp = fopen("D:\\2.txt", "w");
  if (fp == NULL){
    printf("\nFAIL TO OPEN\n");
    exit(1);
  }
}
