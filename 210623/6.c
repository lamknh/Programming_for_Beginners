//2019117865 김나형
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y;
	printf("x, y값 입력: ");
	scanf("%d %d", &x, &y);
	
	if (x != 0 && y != 0) {
		if (x > 0 && y > 0) {
			printf("1사분면");
		}
		else if (x < 0 && y > 0) {
			printf("2사분면");
		}
		else if (x < 0 && y < 0) {
			printf("3사분면");
		}
		else {
			printf("4사분면");
		}
	}
	else {
		printf("x 또는 y가 0이다.");
	}

	
	return 0;
}