#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
  FILE *ifp, *ofp;
  char name[20];
  int age;
  double hight;
  int res;
  ifp = fopen("D:\\a.txt","r");
  if (ifp == NULL){
    printf("FAIL\n");
  }
  ofp = fopen("D:\\a.txt","w");
  if (ofp == NULL){
    printf("FAIL\n");
  }
  while(1){
    res = fscanf(ifp, "%s%d%lf", name &age, &hight);
    if (res == EOF)break;
    fprintf(ofp, "%.1lf %d %s\n", hight, age, name);
  }
  fclose(ifp);
  fclose(ofp);
  return 0;
}
