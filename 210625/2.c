//2019117865김나형
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num, sum = 0, max, min;
	printf("정수 10개를 입력하세요: \n");

	scanf("%d", &num);

	max = min = sum = num;

	for (int i = 0; i < 9; i++) {
		scanf("%d", &num);
		if (min > num) {
			min = num;
		}
		else if (max < num) {
			max = num;
		}
		sum += num;
	}

	printf("누적합 : %d\n", sum);
	printf("최댓값 : %d\n", max);
	printf("최솟값 : %d", min);
	return 0;
}