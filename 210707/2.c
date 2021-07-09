//2019117865 �質��
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
	Date date; // ���� ���� ��¥
	int account_num; // ���¹�ȣ
	char name[30]; // ������
	int balance; // ���� �ܾ�
} ACCOUNT;

void get(FILE* infp, ACCOUNT *account) { //���Ͽ��� ����ü ���� �о���� �Լ�
	if ((infp = fopen("input.txt", "r")) == NULL) { //�б� ���� ����
		exit(1);
	}

	printf("----------------------------------------------------\n");
	printf("������ �� ��   ���¹�ȣ    ������     �����ܾ�\n");
	printf("----------------------------------------------------\n");


	for (int i = 0; i < 5; i++) {
		fscanf(infp, "%d %d %d %d %s %d", &account[i].date.year, &account[i].date.month, &account[i].date.day,
			&account[i].account_num, account[i].name, &account[i].balance);
		fprintf(stdout, "%5d%4d%4d%8d%15s%10d\n", account[i].date.year, account[i].date.month, account[i].date.day,
			account[i].account_num, account[i].name, account[i].balance);
	} //����ü�� ����, ���

	fclose(infp); //���� ����
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
	}//�ִ� �ܾ� �� �˻�

	printf("----------------------------------------------------\n");

	printf("\n[�ִ� ���� �ܾ� �� ����]\n");
	printf("----------------------------------------------------\n");
	printf("������ �� ��   ���¹�ȣ    ������     �����ܾ�\n");
	printf("----------------------------------------------------\n");
	fprintf(stdout, "%5d%4d%4d%8d%15s%10d\n", account[maxno].date.year, account[maxno].date.month, account[maxno].date.day,
		account[maxno].account_num, account[maxno].name, account[maxno].balance); // �� ���
	printf("----------------------------------------------------\n");

	fprintf(outfp, "%d %d %d %d %s %d\n", account[maxno].date.year, account[maxno].date.month, account[maxno].date.day,
		account[maxno].account_num, account[maxno].name, account[maxno].balance); // �� ����

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