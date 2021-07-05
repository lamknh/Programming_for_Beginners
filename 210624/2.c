//2019117865김나형
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;

	do {
		printf("1. 파일\n");
		printf("2. 편집\n");
		printf("3. 보기\n");
		printf("하나를 선택하시오.\n");
		scanf("%d", &n);
	} while (n < 1 || n > 3);

	printf("선택된 메뉴는 %d", n);
	return 0;
}