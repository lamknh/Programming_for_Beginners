//2019117865 김나형

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double num;
	printf("실수를 입력하십시오 >> ");
	scanf("%lf", &num);
	
	printf("지수형식으로는 %e입니다.", num);
	return 0;
}