#include<stdio.h>
int main()
{
  FILE *fp;
  char ch;
  fp = fopen("D:\\1.txt","w");
  if (fp == NULL)
  {
    printf("Fail to opne file\n");
  }
  printf("Enter the data:\n");
  {
    ch = getchar();
    fputc(ch, fp);
  }
  fclose(fp);
  return 0;
}
