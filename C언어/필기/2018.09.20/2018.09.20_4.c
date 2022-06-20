#pragma warning(disable:4996)
#include<stdio.h>
void main(){
  int A, SUM = 0, i;
  for(A=1; A<7; A++){
    printf("Enter %d age", A);
    scanf(":", &i);
    SUM = SUM + i;
  }
  printf("%s\n", SUM/5 );
}
