//2019117865 �質��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y;
	printf("x, y�� �Է�: ");
	scanf("%d %d", &x, &y);
	
	if (x != 0 && y != 0) {
		if (x > 0 && y > 0) {
			printf("1��и�");
		}
		else if (x < 0 && y > 0) {
			printf("2��и�");
		}
		else if (x < 0 && y < 0) {
			printf("3��и�");
		}
		else {
			printf("4��и�");
		}
	}
	else {
		printf("x �Ǵ� y�� 0�̴�.");
	}

	
	return 0;
}