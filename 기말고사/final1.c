//2019117865 �質��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <ctype.h>

//���ĺ� �빮��, �ҹ���, Ư����ȣ(. , -, �����̽� �� ���� ���ڴ� ����)�� ������ ���
int main(void) {
	FILE* fp = NULL;
	int ch;

	//��ҹ��� ���� �迭
	int upper[50] = { 0 };
	int lower[50] = { 0 };
	int spec = 0; //. , -
	int space = 0;
	int cnt = 0;
	

	while ((fp = fopen("origin_c.txt", "r")) == NULL) {
		printf("���� �б� ����\n");
		exit(1);
	}//���� �б�
	
	while ((ch = fgetc(fp)) != EOF) {
		putchar(ch); // ���� ���� ���
		
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
		} // ���� ��� �� �迭 ����
	} // ������ #1 ȭ�� ���

	printf("\n\n[���� ���� ���]\n"); // ��� ���
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
	printf("�����̽� ����: %d\n", space);
	printf("Ư������ ����: %d", spec);

	fclose(fp);
	return 0;
}

// ���� �޸� �Ҵ� free, fclose �� �ϱ�!!!!!!!!!!!!!!!!!