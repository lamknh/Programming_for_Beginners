//2019117865 김나형
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define TITLE_SIZE 50
#define NAME_SIZE 50
#define ALBUM_SIZE 50

enum music_type { KPOP, POP, CLASSIC, OST };

typedef struct music {
	char title[TITLE_SIZE]; // 노래 제목
	char singer[NAME_SIZE]; // 가수
	char album[ALBUM_SIZE]; // 앨범 이름
	enum music_type genre; // 장르
} MUSIC;

void genre(int genre) {
	switch (genre) {
	case 0:
		printf("KPOP");
		break;
	case 1:
		printf("POP");
		break;
	case 2:
		printf("Classic");
		break;
	case 3:
		printf("OST");
		break;
	}
}

int add(struct music list[], int cnt) {
	printf("제목: ");
	scanf("%s", &list[cnt].title);
	printf("가수: ");
	scanf("%s", &list[cnt].singer);
	printf("앨범: ");
	scanf("%s", &list[cnt].album);
	printf("장르(0: KPOP, 1: POP, 2: Classic, 3: OST): ");

	do {
		scanf("%d", &list[cnt].genre);
		if (list[cnt].genre < 0 || list[cnt].genre > 3) {
			printf("잘못 입력된 장르입니다. 다시 입력해주십시오 >>");
		}
	} while (list[cnt].genre < 0 || list[cnt].genre > 3); // 해당 조건일 때 탈출

	cnt++;

	return cnt;
}

void print(struct music list[], int cnt) {
	for (int i = 0; i < cnt; i++) {
		printf("----------------------\n");
		printf("제목: %s", list[i].title);
		puts("");
		printf("가수: %s", list[i].singer);
		puts("");
		printf("앨범: %s", list[i].album);
		puts("");
		printf("장르: ");
		genre(list[i].genre);
		puts("");
	}
}

void search(struct music list[], int cnt) {
	char search[50];
	printf("제목: ");
	scanf("%s", search);

	for (int i = 0; i < cnt; i++) {
		if (!strcmp(list[i].title, search)) {
			printf("----------------------\n");
			printf("제목: %s", list[i].title);
			puts("");
			printf("가수: %s", list[i].singer);
			puts("");
			printf("앨범: %s", list[i].album);
			puts("");
			printf("장르: ");
			genre(list[i].genre);
			puts("");
		}
	}
}

void menu() {
	printf("====================\n");
	printf("1. 추가\n");
	printf("2. 출력\n");
	printf("3. 검색\n");
	printf("4. 종료\n");
	printf("====================\n");
	printf("메뉴를 선택하시오 : ");
}

int main(void)
{
	MUSIC list[10];
	int num = 0, cnt = 0;

	do {
		menu();
		scanf("%d", &num);
		if (num < 1 || num > 4) {
			printf("잘못된 입력입니다. 다시 입력해주십시오.\n");
			getchar();
			continue;
		}
		else if (num == 1){ //추가
			cnt = add(list, cnt);
		}
		else if (num == 2) { //출력
			print(list, cnt);
		}
		else if (num == 3) { //검색
			search(list, cnt);
		}
	} while (num != 4);

	printf("프로그램 종료");

	return 0;
}