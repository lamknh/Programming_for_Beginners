//2019117865 �質��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define TITLE_SIZE 50
#define NAME_SIZE 50
#define ALBUM_SIZE 50

enum music_type { KPOP, POP, CLASSIC, OST };

typedef struct music {
	char title[TITLE_SIZE]; // �뷡 ����
	char singer[NAME_SIZE]; // ����
	char album[ALBUM_SIZE]; // �ٹ� �̸�
	enum music_type genre; // �帣
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
	printf("����: ");
	scanf("%s", &list[cnt].title);
	printf("����: ");
	scanf("%s", &list[cnt].singer);
	printf("�ٹ�: ");
	scanf("%s", &list[cnt].album);
	printf("�帣(0: KPOP, 1: POP, 2: Classic, 3: OST): ");

	do {
		scanf("%d", &list[cnt].genre);
		if (list[cnt].genre < 0 || list[cnt].genre > 3) {
			printf("�߸� �Էµ� �帣�Դϴ�. �ٽ� �Է����ֽʽÿ� >>");
		}
	} while (list[cnt].genre < 0 || list[cnt].genre > 3); // �ش� ������ �� Ż��

	cnt++;

	return cnt;
}

void print(struct music list[], int cnt) {
	for (int i = 0; i < cnt; i++) {
		printf("----------------------\n");
		printf("����: %s", list[i].title);
		puts("");
		printf("����: %s", list[i].singer);
		puts("");
		printf("�ٹ�: %s", list[i].album);
		puts("");
		printf("�帣: ");
		genre(list[i].genre);
		puts("");
	}
}

void search(struct music list[], int cnt) {
	char search[50];
	printf("����: ");
	scanf("%s", search);

	for (int i = 0; i < cnt; i++) {
		if (!strcmp(list[i].title, search)) {
			printf("----------------------\n");
			printf("����: %s", list[i].title);
			puts("");
			printf("����: %s", list[i].singer);
			puts("");
			printf("�ٹ�: %s", list[i].album);
			puts("");
			printf("�帣: ");
			genre(list[i].genre);
			puts("");
		}
	}
}

void menu() {
	printf("====================\n");
	printf("1. �߰�\n");
	printf("2. ���\n");
	printf("3. �˻�\n");
	printf("4. ����\n");
	printf("====================\n");
	printf("�޴��� �����Ͻÿ� : ");
}

int main(void)
{
	MUSIC list[10];
	int num = 0, cnt = 0;

	do {
		menu();
		scanf("%d", &num);
		if (num < 1 || num > 4) {
			printf("�߸��� �Է��Դϴ�. �ٽ� �Է����ֽʽÿ�.\n");
			getchar();
			continue;
		}
		else if (num == 1){ //�߰�
			cnt = add(list, cnt);
		}
		else if (num == 2) { //���
			print(list, cnt);
		}
		else if (num == 3) { //�˻�
			search(list, cnt);
		}
	} while (num != 4);

	printf("���α׷� ����");

	return 0;
}