#pragma warning(disable:4996)
#include<stdio.h>
void main(){
  int input, change;
  int w500, w100, w50, w10;

  printf("Enter the money");
  scanf("%d", &input);
  change = input;

  w500 = change / 500;
  change = change % 500;
  w100 = change / 100;
  change = change % 100;
  w50 = change / 50;
  change = change % 50;
  w10 = change / 10;

  printf("500W coin : %d\n",w500 );
  printf("100W coin : %d\n",w100 );
  printf("50W coin : %d\n",w50 );
  printf("10W coin : %d\n",w10 );
}
