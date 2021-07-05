//2019117865 김나형
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592

int main(void)
{
	double r;
	printf("반지름 입력: ");
	scanf("%lf", &r);

	printf("V = %lf", (4 / 3) * PI * r * r * r);
	printf("S = %lf", 4 * PI * r * r);

	return 0;
}