//2019117865 김나형
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num, n = 0, sum = 0;
	
	printf("정수 1개를 입력하세요 : \n");
	scanf("%d", &num);

	while (num) {
		sum += num % 10;
		num /= 10;
		n++;
	}

	printf("입력한 자릿수 %d이고\n", n);
	printf("각 자릿수의 합은 %d입니다.", sum);

	return 0;
}