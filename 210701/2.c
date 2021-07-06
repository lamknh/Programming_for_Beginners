//2019117865 김나형
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 45

int input() {
	int num;
	do {
		printf("Lotto 실행 회수 입력 (1~5회): ");
		scanf("%d", &num);
	} while (num < 1 || num > 5);

	return num;
}

void print(int ary[], int size) { //로또 번호 출력
	for (int i = 0; i < size; i++) {
		printf("%3d", ary[i]);
	}
	puts("");
}	

int duplicate(int n, int ary[], int size) { // 중복 숫자 검사
	for (int i = 0; i < size; i++) {
		if (n == ary[i]) {
			int new = rand() % MAX + 1;
			if (n != new) {
				return new;
			}
			else {
				duplicate(new, ary, 6);
			}
		}
	}
	return n;
}

void lottery(int num) { // 1차원 배열 저장
	int ary[6] = { 0 };
	for (int j = 0; j < num; j++) {
		for (int i = 0; i < 6; i++) {
			int n = rand() % MAX + 1;
			ary[i] = duplicate(n, ary, 6);
		}
		print(ary, 6);
	}
}


int main(void)
{
	srand(time(NULL));

	lottery(input());

	return 0;
}