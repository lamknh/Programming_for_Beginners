//2019117865 김나형
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int year;
	int month;
	int day;
}Date;
typedef struct {
	Date date; // 통장 개설 날짜
	int account_num; // 계좌번호
	char name[30]; // 예금주
	int balance; // 통장 잔액
} ACCOUNT;

void get(FILE* infp, ACCOUNT *account) { //파일에서 구조체 정보 읽어오는 함수
	if ((infp = fopen("input.txt", "r")) == NULL) { //읽기 모드로 열기
		exit(1);
	}

	printf("----------------------------------------------------\n");
	printf("개설년 월 일   계좌번호    예금주     통장잔액\n");
	printf("----------------------------------------------------\n");


	for (int i = 0; i < 5; i++) {
		fscanf(infp, "%d %d %d %d %s %d", &account[i].date.year, &account[i].date.month, &account[i].date.day,
			&account[i].account_num, account[i].name, &account[i].balance);
		fprintf(stdout, "%5d%4d%4d%8d%15s%10d\n", account[i].date.year, account[i].date.month, account[i].date.day,
			account[i].account_num, account[i].name, account[i].balance);
	} //구조체에 저장, 출력

	fclose(infp); //파일 닫음
}

void getMax(FILE* outfp, ACCOUNT* account) {
	int max = 0, maxno = 0;

	if ((outfp = fopen("output.txt", "w")) == NULL) {
		exit(1);
	}

	for (int i = 0; i < 5; i++) {
		if (max < account[i].balance) {
			maxno = i;
			max = account[i].balance;
		}
	}//최대 잔액 고객 검색

	printf("----------------------------------------------------\n");

	printf("\n[최대 통장 잔액 고객 정보]\n");
	printf("----------------------------------------------------\n");
	printf("개설년 월 일   계좌번호    예금주     통장잔액\n");
	printf("----------------------------------------------------\n");
	fprintf(stdout, "%5d%4d%4d%8d%15s%10d\n", account[maxno].date.year, account[maxno].date.month, account[maxno].date.day,
		account[maxno].account_num, account[maxno].name, account[maxno].balance); // 고객 출력
	printf("----------------------------------------------------\n");

	fprintf(outfp, "%d %d %d %d %s %d\n", account[maxno].date.year, account[maxno].date.month, account[maxno].date.day,
		account[maxno].account_num, account[maxno].name, account[maxno].balance); // 고객 저장

	printf("output.txt is saved");
	fclose(outfp);
}

int main()
{
	FILE* infp = NULL, * outfp = NULL;
	ACCOUNT account[5] = { 0 };

	get(infp, account);
	getMax(outfp, account);

	return 0;
}