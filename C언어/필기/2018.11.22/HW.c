#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void loop() {
  delay(1000);
  WiFiClient client;
  const int Port = 1381;
  if (!client.connect(host, Port)) {
    return;
  }
  String str = "홍길동"+":33"+":25";
  client.print(str);
  delay(1000);
  client.flush();
}





#define SIZE 3

struct student {
	int DB;
	char grade;
};


int main() {
	struct student s[SIZE];
	int i, u;
	FILE *fp;//파일포인터 선언
	fp = fopen("C:\\a.txt", "r");
	if (fp == NULL) {
		printf("파일 오픈실패\n");
		exit(-1);
	}
	for (i = 0; i < SIZE; i++) {
		fscanf(fp, "%d",&s[i].DB);


		if (s[i].DB >= 90)
			s[i].grade = 'A';
		else if(s[i].DB >= 80)
			s[i].grade = 'B';
		else
			s[i].grade = 'F';
	}
	fclose(fp);
	fp = fopen("C:\\b.txt", "w");
	if (fp == NULL) {
		printf("쓰기용 파일 열기 실패\n");
		exit(-1);
	}

	for (i = 0; i < SIZE; i++) {
		fprintf(fp, " %6d %6c\n",s[i].DB,s[i].grade);
	}
	fclose(fp);
	printf("파일 출력 완료\n");
	return 0;
}
