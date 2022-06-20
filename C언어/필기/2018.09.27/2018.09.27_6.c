#include<stdio.h>
int main(){
  int score[3][4];
  int i, j;
  int tot;
  double avg;
  for (i=0; i<3; i++){
    printf("Enter score:");
    for (j=0; j<4; j++){
      tot += score[i][j];
    }
    avg = tot / 4.0;
    printf("TOT: %d, AVG: %2\n", );
  }
}
