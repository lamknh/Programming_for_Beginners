//2019117865 김나형
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 30

typedef struct {
	char name[SIZE];
	char number[SIZE];
} PHONE_BOOK;

void add(PHONE_BOOK* pbook, int cnt) { //전화번호 추가	
	char name[SIZE];
	char number[SIZE];
	printf("이름: ");
	scanf("%s", &name);
	printf("전화번호: ");
	scanf("%s", &number);

	strcpy(pbook[cnt].name, name);
	strcpy(pbook[cnt].number, number);
}

void search(PHONE_BOOK* pbook, int cnt) { //이름 검색
	int count = 0;
	char name[SIZE];
	printf("검색할 이름을 입력하세요: ");
	scanf("%s", &name);

	for (int i = 0; i < cnt; i++) {
		if (strcmp(pbook[i].name, name) == 0) {
			printf("----------------------------\n");
			printf("[ %d]	%s	%s\n", i, pbook[i].name, pbook[i].number);
			printf("----------------------------\n");
			puts("");
			count++;
		}
	}

	if (count == 0) {
		printf("일치하는 이름이 없습니다.\n");
	}
}

void edit(PHONE_BOOK* pbook, int cnt) { //전화번호 변경
	char name[SIZE];
	char number[SIZE];
	int count = 0;

	printf("검색할 이름을 입력하세요:");
	scanf("%s", &name);

	for (int i = 0; i < cnt; i++) {
		if (strcmp(pbook[i].name, name) == 0) {
			printf("현재 전화번호는 %s 입니다.\n", pbook[i].number);
			printf("변경할 전화번호를 입력하세요: ");
			scanf("%s", &number);
			strcpy(pbook[i].number, number);
			printf("변경된 전화번호입니다.\n\n");
			for (int i = 0; i < cnt; i++) {
				if (strcmp(pbook[i].name, name) == 0) {
					printf("----------------------------\n");
					printf("[ %d]	%s	%s\n", i, pbook[i].name, pbook[i].number);
					printf("----------------------------\n");
					puts("");
					count++;
				}
			}
		}
	}

	if (count == 0) {
		printf("일치하는 이름이 없습니다.\n");
	}
}

void list(PHONE_BOOK* pbook, int cnt) { //전화번호 목록보기
	if (cnt == 0) {
		printf("저장된 자료가 없습니다.\n");
	}
	else {
		printf("----------------------------\n");
		printf("순번	이름	전화번호\n");
		printf("----------------------------\n");
		;	for (int i = 0; i < cnt; i++) {
			printf("[ %d]	%s	%s\n", i, pbook[i].name, pbook[i].number);
		}
		printf("----------------------------\n");
	}
	
}
void menu() {
	printf("==============================\n");
	printf("1. 전화번호 추가\n");
	printf("2. 이름 검색\n");
	printf("3. 전화번호 변경\n");
	printf("4. 전화번호 목록 보기\n");
	printf("5. 프로그램 종료\n");
	printf("==============================\n");
	printf("번호를 선택하세요: ");
}

int main(void) {
	PHONE_BOOK* pbook = NULL; 
	int num = 0;
	int mnum = 0, cnt = 0;
	do {
		printf("저장할 전화번호 수를 입력하세요(1~5): ");
		scanf("%d", &num);
		if (num < 1 || num > 5) {
			printf("1~5의 값을 입력하세요.\n");
		}
	} while (num < 1 || num > 5);

	pbook = (PHONE_BOOK*)malloc(sizeof(PHONE_BOOK) * num); // 동적할당
	
	do {
		menu();
		scanf("%d", &mnum);
		if (mnum < 1 || mnum > 5) {
			printf("잘못된 메뉴 선택입니다. 메뉴 1~5를 선택하세요.\n");
		}

		switch (mnum) {
		case 1:
			add(pbook, cnt);
			cnt++;
			break;
		case 2:
			search(pbook, cnt);
			break;
		case 3:
			edit(pbook, cnt);
			break;
		case 4:
			list(pbook, cnt);
			break;
		}
	} while (mnum !=  5); // 메뉴 다시 입력 받기
	
	printf("프로그램 종료"); // 프로그램 종료시 멘트 출력
	free(pbook);
	return 0;
}

// 동적 메모리 할당 free, fclose 꼭 하기!!!!!!!!!!!!!!!!!