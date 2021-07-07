//2019117865 �質��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct {
	int id; // �й�
	char name[20]; // �̸�
	int mid; // �߰���� ���� (100�� ����, 30%)
	int final; // �⸻��� ���� (100�� ����, 40%)
	int hw1; // ����1 ���� (30�� ����)
	int hw2; // ����2 ����
	int attendance; // �⼮ ����(10�� 100%)
} STUDENT;

// �л��� STUDENT_SCORE ����ü�� ����� ���� �����ؾ� ��
typedef struct {
	STUDENT student; // �ݵ�� STUDENT ����ü�� ���� ���Ѿ� ��
	 // �ʿ��� ���� �߰�
	double mid; // �߰���� ���� (100�� ����, 30%)
	double final; // �⸻��� ���� (100�� ����, 40%)
	double hw; // ����2 ����
	double total;
	char score[5];
}STUDENT_SCORE;

void print(STUDENT *student, int snum, STUDENT_SCORE *sscore, int scnum) { //ȭ�� ���
	printf("�л� ����\n");
	printf("�й�	�̸�	�߰�	�⸻	����1	����2	�⼮\n");
	printf("-------------------------------------------------------\n");
	for (int i = 0; i < snum; i++) {
		printf("%d %s	%d	%d	%d	%d	%d\n", student[i].id, student[i].name, 
			student[i].mid, student[i].final, student[i].hw1, student[i].hw2, student[i].attendance);
	}
	printf("-------------------------------------------------------\n");
	puts("");

	printf("���� ����\n");
	printf("�й�	�̸�	�߰�	�⸻	����	�⼮	����	����\n");
	printf("----------------------------------------------------------------\n");
	for (int i = 0; i < scnum; i++) {
		printf("%d %s	%.1lf	%.1lf	%.1lf	%d	%.1lf	%s\n", sscore[i].student.id, sscore[i].student.name,
			sscore[i].mid, sscore[i].final, sscore[i].hw, sscore[i].student.attendance, sscore[i].total, sscore[i].score);
	}
	printf("----------------------------------------------------------------\n");
}

void score(STUDENT *student, STUDENT_SCORE *sscore, int scnum) { //����ü �迭 �Ķ���� ���� // ���� ���
	for (int i = 0; i < scnum; i++) {
		sscore[i].student = student[i];
		sscore[i].mid = sscore[i].student.mid * 0.3;
		sscore[i].final = sscore[i].student.final * 0.4;
		sscore[i].hw = (double)(sscore[i].student.hw1 + sscore[i].student.hw2) / 2;
		sscore[i].total = sscore[i].mid + sscore[i].student.attendance + sscore[i].final + sscore[i].hw;

		if (sscore[i].total <= 100 && sscore[i].total >= 95) {
			strcpy(sscore[i].score, "A+");
		}
		else if (sscore[i].total <= 94 && sscore[i].total >= 90) {
			strcpy(sscore[i].score, "A0");
		}
		else if (sscore[i].total >= 85) {
			strcpy(sscore[i].score, "B+");
		}
		else if (sscore[i].total >= 80) {
			strcpy(sscore[i].score, "B0");
		}
		else if (sscore[i].total >= 75) {
			strcpy(sscore[i].score, "C+");
		}
		else if (sscore[i].total >= 70) {
			strcpy(sscore[i].score, "C0");
		}
		else if (sscore[i].total >= 65) {
			strcpy(sscore[i].score, "D+");
		}
		else if (sscore[i].total >= 60) {
			strcpy(sscore[i].score, "D0");
		}
		else {
			strcpy(sscore[i].score, "F");
		}
	}
}

int main(void) {
	// �й� �̸� �߰� �⸻ ����1, ����2, �⼮
	STUDENT student[5] = { {2020019, "ȫ�浿", 10, 20, 0, 5, 10},
			{2021012, "������", 35, 55, 27, 15, 7},
			{2019001, "������", 70, 80, 29, 22, 8},
			{2018015, "�ƹ���", 100, 90, 28, 29, 5},
			{2017075, "ȫ���", 56, 90, 15, 30, 10} };

	STUDENT_SCORE sscore[5];

	score(student, sscore, 5);
	print(student, 5, sscore, 5);

	return 0;
}