#pragma warning(disable:4996)
#include<stdio.h>
void main()
{
  int A, B, SUM;
  for (A = 1; A < 10; A++){
    printf("\n");
    for (B = 1; B < 10; B++){
      printf("%d X %d = %d", A, B, A*B );
    }
  }
}
