//2019117865 김나형
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct {
	int id; // 학번
	char name[20]; // 이름
	int mid; // 중간고사 점수 (100점 만점, 30%)
	int final; // 기말고사 점수 (100점 만점, 40%)
	int hw1; // 과제1 점수 (30점 만점)
	int hw2; // 과제2 점수
	int attendance; // 출석 점수(10점 100%)
} STUDENT;

// 학생별 STUDENT_SCORE 구조체를 만들고 값을 저장해야 됨
typedef struct {
	STUDENT student; // 반드시 STUDENT 구조체를 포함 시켜야 됨
	 // 필요한 변수 추가
	double mid; // 중간고사 점수 (100점 만점, 30%)
	double final; // 기말고사 점수 (100점 만점, 40%)
	double hw; // 과제2 점수
	double total;
	char score[5];
}STUDENT_SCORE;

void print(STUDENT *student, int snum, STUDENT_SCORE *sscore, int scnum) { //화면 출력
	printf("학생 정보\n");
	printf("학번	이름	중간	기말	과제1	과제2	출석\n");
	printf("-------------------------------------------------------\n");
	for (int i = 0; i < snum; i++) {
		printf("%d %s	%d	%d	%d	%d	%d\n", student[i].id, student[i].name, 
			student[i].mid, student[i].final, student[i].hw1, student[i].hw2, student[i].attendance);
	}
	printf("-------------------------------------------------------\n");
	puts("");

	printf("성적 정보\n");
	printf("학번	이름	중간	기말	과제	출석	총점	학점\n");
	printf("----------------------------------------------------------------\n");
	for (int i = 0; i < scnum; i++) {
		printf("%d %s	%.1lf	%.1lf	%.1lf	%d	%.1lf	%s\n", sscore[i].student.id, sscore[i].student.name,
			sscore[i].mid, sscore[i].final, sscore[i].hw, sscore[i].student.attendance, sscore[i].total, sscore[i].score);
	}
	printf("----------------------------------------------------------------\n");
}

void score(STUDENT *student, STUDENT_SCORE *sscore, int scnum) { //구조체 배열 파라미터 전달 // 점수 계산
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
	// 학번 이름 중간 기말 과제1, 과제2, 출석
	STUDENT student[5] = { {2020019, "홍길동", 10, 20, 0, 5, 10},
			{2021012, "김유신", 35, 55, 27, 15, 7},
			{2019001, "강감찬", 70, 80, 29, 22, 8},
			{2018015, "아무개", 100, 90, 28, 29, 5},
			{2017075, "홍길순", 56, 90, 15, 30, 10} };

	STUDENT_SCORE sscore[5];

	score(student, sscore, 5);
	print(student, 5, sscore, 5);

	return 0;
}