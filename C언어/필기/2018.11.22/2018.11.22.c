#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
void sec2time(void);
void distime(void);

int main(void)
{
  char ch;
  do{
    //system("CLS")
    printf("\n [MENU SYSTEM]\n\n");
    printf("1. sec to time\n");
    printf("2. speed to time\n");
    printf("1. EXIT\n");
    printf("\n select a number: ");
    switch (ch = getche())
    {
      case '1':{
        sec2time();
        break; }

      case '2':{
        distime();
        break; }

      case '3':{
        printf("\n\n Close"\n);
        break; }
    }
    getch(); //결과 출력 후 일시 정지
  }while (!strchr("3", ch))
  return 0;
}

void sec2time(void){
  int in, hour, min. sec, tmp;
  printf("input sec: ");
  scanf("%d", &in);
  tmp = in;
  hour = tmp / 3600;
  tmp = tmp % 3600;
  min = tmp / 60;
  sec = tmp % 60;
  printf("%dSec = %dHour %dMin %dSec\n", in, hour, min, sec);
}

void distime(void){
  int dis, speed, hour, min, sec;
  double tmp;
  printf("\n\n Input distance[KM]: ");
  scanf("%d", &dis);
  printf("\n\n Input speed[KM/H]: ");
  scanf("%d", &speed);

  tmp = dis / speed;
  hour = (int)tmp;
  tmp = tmp - hour;
  min = (int)(tmp * 60);
  sec = (int)((tmp)=min)*60);
  printf("Distance %d[KM], Speed %d[KM/H], Time %dHour, %dMin, %dSec\n", dis, speed, hour, min, sec);
}
