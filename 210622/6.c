//2019117865 김나형

#define _CRT_SECURE_NO_WARNINGS
#define SQ2(x) ((x) * (x))
#define SQ4(x) (SQ2(x) * SQ2(x))

#include <stdio.h>

int main(void)
{
	float num;
	printf("x의 값을 실수로 입력하시오 : ");
	scanf("%f", &num);
	printf("x의 제곱은 %.1f입니다\n", SQ2(num));
	printf("x의 네제곱은 %.1f입니다", SQ4(num));

	return 0;
}