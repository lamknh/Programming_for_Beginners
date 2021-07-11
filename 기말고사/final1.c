//2019117865 김나형
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <ctype.h>

//알파벳 대문자, 소문자, 특수기호(. , -, 스페이스 및 숫자 문자는 제외)의 개수를 계산
int main(void) {
	FILE* fp = NULL;
	int ch;

	//대소문자 각각 배열
	int upper[50] = { 0 };
	int lower[50] = { 0 };
	int spec = 0; //. , -
	int space = 0;
	int cnt = 0;
	

	while ((fp = fopen("origin_c.txt", "r")) == NULL) {
		printf("파일 읽기 실패\n");
		exit(1);
	}//파일 읽기
	
	while ((ch = fgetc(fp)) != EOF) {
		putchar(ch); // 파일 내용 출력
		
		if (isupper(ch)) {
			upper[ch - 65]++;
		}
		else if (ch == 32) {
			space++;
		}
		else if (islower(ch)) {
			lower[ch - 97]++;
		}
		else if(ch == '.' || ch == ',' || ch == '-'){
			spec++;
		} // 개수 계산 및 배열 저장
	} // 실행결과 #1 화면 출력

	printf("\n\n[문자 개수 출력]\n"); // 결과 출력
	printf("----------------------------------------------------\n");
	for (int i = 'A'; i < 'N'; i++) {
		printf("%4c", i);
	}
	puts("");
	for (int i = 0; i < 13; i++) {
		printf("%4d", upper[i]);
	}
	printf("\n----------------------------------------------------\n");
	for (int i = 'N'; i <= 'Z'; i++) {
		printf("%4c", i);
	}
	puts("");
	for (int i = 13; i < 26; i++) {
		printf("%4d", upper[i]);
	}
	printf("\n----------------------------------------------------\n");
	for (int i = 'a'; i <= 'm'; i++) {
		printf("%4c", i);
	}
	puts("");
	for (int i = 0; i < 13; i++) {
		printf("%4d", lower[i]);
	}
	printf("\n----------------------------------------------------\n");
	for (int i = 'n'; i <= 'z'; i++) {
		printf("%4c", i);
	}
	puts("");
	for (int i = 13; i < 26; i++) {
		printf("%4d", lower[i]);
	}
	printf("\n----------------------------------------------------\n");
	printf("스페이스 개수: %d\n", space);
	printf("특수문자 개수: %d", spec);

	fclose(fp);
	return 0;
}

// 동적 메모리 할당 free, fclose 꼭 하기!!!!!!!!!!!!!!!!!