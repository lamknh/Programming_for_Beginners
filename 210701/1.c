//2019117865김나형
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void onePrint(int ary[], int length) { //1차원 배열 출력함수
	printf("1차원 배열\n");
	for (int i = 0; i < length; i++) {
		printf("%3d", ary[i]);
	}
	puts("");
}

void twoPrint(int array[][3], int row, int col) { //2차원배열 출력함수
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%3d", array[i][j]);
		}
		printf("\n");
	}
}

void oneToTwo(int ary[], int row, int col) {
	printf("1차원 배열을 2차원 배열로 (4x3) 변환\n");
	int array[4][3] = { 0 };

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			array[i][j] = ary[i * col + j];
		}
	}

	twoPrint(array, row, col);
}

int main(void)
{
	int ary[12] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };

	onePrint(ary, 12);
	oneToTwo(ary, 4, 3);

	return 0;
}