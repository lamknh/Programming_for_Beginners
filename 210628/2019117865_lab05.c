//2019117865 김나형
/* 210628 과제 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void eg1() {
	int score[5][4] = { {97, 90, 88, 95}, {76, 89, 75, 83}, {60, 70, 88, 82}, {83, 89, 92, 85}, {75, 73, 72, 78} }, i;
	int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0;
	
	for (i = 0; i < 4; i++) {
		sum1 += score[0][i];
	}
	for (i = 0; i < 4; i++) {
		sum2 += score[1][i];
	}
	for (i = 0; i < 4; i++) {
		sum3 += score[2][i];
	}
	for (i = 0; i < 4; i++) {
		sum4 += score[3][i];
	}
	for (i = 0; i < 4; i++) {
		sum5 += score[4][i];
	}
	printf("이현수 합 : %d 평균 : %lf\n", sum1, (double)sum1/4);
	printf("김기수 합 : %d 평균 : %lf\n", sum2, (double)sum2 / 4);
	printf("김범용 합 : %d 평균 : %lf\n", sum3, (double)sum3 / 4);
	printf("장기태 합 : %d 평균 : %lf\n", sum4, (double)sum4 / 4);
	printf("이명수 합 : %d 평균 : %lf\n\n", sum5, (double)sum5 / 4);
}

void eg2() {
	int ary[4][4] = { {97, 90, 88, 95},{76, 89, 75, 83},{83, 89, 92, 85},{75, 73, 72, 78} };
	int col1 = 0, col2 = 0, col3 = 0, col4 = 0;
	int row1 = 0, row2 = 0, row3 = 0, row4 = 0, sum = 0;

	for (int i = 0; i < 4; i++) {
		row1 += ary[i][0];
		col1 += ary[0][i];
	}
	for (int i = 0; i < 4; i++) {
		row2 += ary[i][1];
		col2 += ary[1][i];
	}
	for (int i = 0; i < 4; i++) {
		row3 += ary[i][2];
		col3 += ary[2][i];
	}
	for (int i = 0; i < 4; i++) {
		row4 += ary[i][3];
		col4 += ary[3][i];
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			sum += ary[i][j];
		}
	}

	printf("가로 1번줄 합 : %d	2번줄 합 : %d	3번줄 합 : %d	4번줄 합: %d\n", col1, col2, col3, col4);
	printf("세로 1번줄 합 : %d	2번줄 합 : %d	3번줄 합 : %d	4번줄 합: %d\n", row1, row2, row3, row4);
	printf("모든 수의 합 : %d\n\n", sum);
}

void eg3() {
	int ary1[4][3] = { {97, 90, 88}, {76, 89, 75}, {83, 89, 92}, {75, 73, 72} };
	int ary2[4][3] = { {9, 8, 9}, {8, 7, 3}, {9, 9, 8}, {7, 2, 8} };
	int plus[4][3] = { 0 }, minus[4][3] = { 0 };
	
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			plus[i][j] = ary1[i][j] + ary2[i][j];
			minus[i][j] = ary1[i][j] - ary2[i][j];
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", plus[i][j]);
		}
		printf("	");
		for (int j = 0; j < 3; j++) {
			printf("%d ", minus[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
void eg4() {
	int a[4][2] = { {9, 9}, {7, 8}, {8, 8}, {7, 3} };
	int b[2][3] = { {9, 9, 8}, {7, 2, 8} };
	int c[4][3] = { 0 };

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 2; k++) {
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d	", c[i][j]);
		}
		printf("\n");
	}
	puts("");
}
void eg5() {
	int ary[10] = { 0 }, num, freq = 0;
	int freq_ary[10] = { 0 };
	printf("0~9사이의 수 20개 입력: ");
	for (int i = 0; i < 20; i++) {
		scanf("%d", &num);
		ary[num]++;
	}

	for (int i = 0; i < 9; i++) {
		if (ary[freq] < ary[i]) {
			freq = i;
		}
	}
	printf("가장 많이 입력받은 빈도 수 :");
	for (int i = 0; i < 9; i++) {
		if (ary[i] == ary[freq]) {
			printf("%d ", i);
		}
	}
	puts("");
	
	printf("빈도 수 %d번\n\n", ary[freq]);
}
void eg6_1() {
	int ary[3] = { 8, 2, 8 };
	int* p = ary;

	printf("ary를 이용한 출력\n");
	for (int i = 0; i < 3; i++) {
		printf("%d ", ary[i]);
	}
	printf("\np를 이용한 출력\n");
	for (int i = 0; i < 3; i++) {
		printf("%d ", *(p + i));
	}

}
void eg6_2() {
	int ary[2][3] = { {4, 2, 3}, {5, 2, 3} };
	int(* p)[3] = ary;

	printf("\n\nary를 이용한 출력\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", ary[i][j]);
		}
		puts("");
	}
	printf("\np를 이용한 출력\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", *(*(p + i) + j));
		}
		puts("");
	}
}
void eg6_3() {
	int ary[2][2][3] = { {{1, 2, 3}, {4, 5, 6}}, {{7, 8, 9}, {10, 11, 12}} };
	int(*p)[2][3] = ary;
	printf("\n\nary를 이용한 출력\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 3; k++) {
				printf("%d ", ary[i][j][k]);
			}
			puts("");
		}
		puts("");
	}
	printf("\np를 이용한 출력\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 3; k++) {
				printf("%d ", *(*(*(p + i)+ j) + k));
			}
			puts("");
		}
		puts("");
	}
}
void eg7() {
	int a, b, c;
	int* ad [3]= { &a, &b, &c };
	printf("포인터 배열의 배열요소를 이용한 a, b, c 입력 >> ");
	scanf("%d", ad[0]); scanf("%d", ad[1]); scanf("%d", ad[2]);
	printf("\n포인터 배열의 배열요소를 이용한 a, b, c 출력 => ");
	printf("a : %d, b : %d, c : %d", *ad[0], *ad[1], *ad[2]);
}

int main(void) {
	eg1();
	eg2();
	eg3();
	eg4();
	eg5();
	eg6_1();
	eg6_2();
	eg6_3();
	eg7();
	return 0;
}