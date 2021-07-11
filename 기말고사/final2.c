//2019117865 �質��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 30

typedef struct {
	char name[SIZE];
	char number[SIZE];
} PHONE_BOOK;

void add(PHONE_BOOK* pbook, int cnt) { //��ȭ��ȣ �߰�	
	char name[SIZE];
	char number[SIZE];
	printf("�̸�: ");
	scanf("%s", &name);
	printf("��ȭ��ȣ: ");
	scanf("%s", &number);

	strcpy(pbook[cnt].name, name);
	strcpy(pbook[cnt].number, number);
}

void search(PHONE_BOOK* pbook, int cnt) { //�̸� �˻�
	int count = 0;
	char name[SIZE];
	printf("�˻��� �̸��� �Է��ϼ���: ");
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
		printf("��ġ�ϴ� �̸��� �����ϴ�.\n");
	}
}

void edit(PHONE_BOOK* pbook, int cnt) { //��ȭ��ȣ ����
	char name[SIZE];
	char number[SIZE];
	int count = 0;

	printf("�˻��� �̸��� �Է��ϼ���:");
	scanf("%s", &name);

	for (int i = 0; i < cnt; i++) {
		if (strcmp(pbook[i].name, name) == 0) {
			printf("���� ��ȭ��ȣ�� %s �Դϴ�.\n", pbook[i].number);
			printf("������ ��ȭ��ȣ�� �Է��ϼ���: ");
			scanf("%s", &number);
			strcpy(pbook[i].number, number);
			printf("����� ��ȭ��ȣ�Դϴ�.\n\n");
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
		printf("��ġ�ϴ� �̸��� �����ϴ�.\n");
	}
}

void list(PHONE_BOOK* pbook, int cnt) { //��ȭ��ȣ ��Ϻ���
	if (cnt == 0) {
		printf("����� �ڷᰡ �����ϴ�.\n");
	}
	else {
		printf("----------------------------\n");
		printf("����	�̸�	��ȭ��ȣ\n");
		printf("----------------------------\n");
		;	for (int i = 0; i < cnt; i++) {
			printf("[ %d]	%s	%s\n", i, pbook[i].name, pbook[i].number);
		}
		printf("----------------------------\n");
	}
	
}
void menu() {
	printf("==============================\n");
	printf("1. ��ȭ��ȣ �߰�\n");
	printf("2. �̸� �˻�\n");
	printf("3. ��ȭ��ȣ ����\n");
	printf("4. ��ȭ��ȣ ��� ����\n");
	printf("5. ���α׷� ����\n");
	printf("==============================\n");
	printf("��ȣ�� �����ϼ���: ");
}

int main(void) {
	PHONE_BOOK* pbook = NULL; 
	int num = 0;
	int mnum = 0, cnt = 0;
	do {
		printf("������ ��ȭ��ȣ ���� �Է��ϼ���(1~5): ");
		scanf("%d", &num);
		if (num < 1 || num > 5) {
			printf("1~5�� ���� �Է��ϼ���.\n");
		}
	} while (num < 1 || num > 5);

	pbook = (PHONE_BOOK*)malloc(sizeof(PHONE_BOOK) * num); // �����Ҵ�
	
	do {
		menu();
		scanf("%d", &mnum);
		if (mnum < 1 || mnum > 5) {
			printf("�߸��� �޴� �����Դϴ�. �޴� 1~5�� �����ϼ���.\n");
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
	} while (mnum !=  5); // �޴� �ٽ� �Է� �ޱ�
	
	printf("���α׷� ����"); // ���α׷� ����� ��Ʈ ���
	free(pbook);
	return 0;
}

// ���� �޸� �Ҵ� free, fclose �� �ϱ�!!!!!!!!!!!!!!!!!