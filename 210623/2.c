//2019117865 김나형
#define _CRT_SECURE_NO_WARNINGS
#define PI 3.141592
#include <stdio.h>

int main(void)
{
	int num;
	printf("정수 천만 이하의 하나의 수를 입력 >> ");
	scanf("%d", &num);

	int tthou, thou, hund, ten, one;

	tthou = num / 10000;
	thou = num % 10000 / 1000;
	hund = num % 1000 / 100;
	ten = num % 100 / 10;
	one = num % 10;

	printf("입력한 수 %d는 %d만 %d천 %d백 %d십 %d입니다.", num, tthou, thou, hund, ten, one);

	return 0;
}