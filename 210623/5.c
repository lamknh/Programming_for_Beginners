//2019117865 김나형
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double height, weight;

	printf("키와 몸무게를 순서대로 입력: ");
	scanf("%lf %lf", &height, &weight);

	if (weight <= (height - 100) * 0.9) {
		printf("정상");
	}
	else {
		printf("비만");
	}

	return 0;
}