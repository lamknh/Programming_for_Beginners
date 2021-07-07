//2019117865김나형
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define FALSE 0
#define TRUE 1

int main(void) {
	int num, n = 0, sum = 0, min = 0, max = 0;
	int twenty = FALSE, between = TRUE;
	printf("정수 데이터를 입력하세요 (종료: 99999) : \n");

	while (1) {
		scanf("%d", &num);
		if (num != 99999) {
			n++; //데이터 개수
			sum += num; //총합
			if (num < min) {
				min = num;
			}
			else if (num > max) {
				max = num;
			}

			if (num < 20) {
				twenty = TRUE;
			}

			if (num < 10 || num > 90) {
				between = FALSE;
			}
		}
		else {
			break;
		}
	}

	printf("입력한 데이터의 개수: %d\n", n);
	printf("총합: %d\n", sum);
	printf("평균: %lf\n", (double)sum / n);
	printf("최소 값: %d\n", min);
	printf("최대 값: %d\n", max);

	if (twenty == TRUE) {
		printf("20보다 작은수가 있는가? true\n");
	}
	else {
		printf("20보다 작은수가 있는가? false\n");
	}

	if (between == TRUE) {
		printf("모든 수가 10에 90사이의 정수인가? true\n");
	}
	else {
		printf("모든 수가 10에 90사이의 정수인가? false\n");
	}
	
	

	return 0;
}