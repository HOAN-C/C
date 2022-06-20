#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//수족관 환경 정상 / 비정상 판단

struct aquar {
	int tem; //8~15적정 온도
	int water_quality; //5~10 적당
	int light; //5~10 적당
	char mark;
};

char checker (int a, int b, int c)
{
	int C1, C2, C3;
	if (8<a && a<15){
		C1 = 1;
	}
	else{
		C1 = 0;
	}
	if (5<b && b<10){
		C2 = 1;
	}
	else{
		C2 = 0;
	}
	if (5<c && c<10){
		C3 = 1;
	}
	else{
		C3 = 0;
	}

	if (C1+C2+C3 == 3){
		return 'A';
	}
	else if (C1+C2+C3 == 2){
		return 'B';
	}
	else if (C1+C2+C3 == 1){
		return 'C';
	}
}
int main ()
{
	int NUM = 0;
	struct aquar TST1;
	printf("Enter the temperature: (Celsius)");
	scanf("%d", &NUM);
	TST1.tem = NUM;
	printf("Enter the water qualityd: (1~20)");
	scanf("%d", &NUM);
	TST1.water_quality = NUM;
	printf("Enter the light: (1~20)");
	scanf("%d", &NUM);
	TST1.light = NUM;
	TST1.mark = checker (TST1.tem, TST1.water_quality, TST1.light);
	printf("MARK is %c", TST1.mark);
}
