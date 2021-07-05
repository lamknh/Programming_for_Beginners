//2019117865 김나형
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num, m, n, mask = 0;
	printf("num m n >> ");
	scanf("%d %d %d", &num, &m, &n);
	
	for (int i = 32; i > 0; i--) {
		if (i >= m && i <= n) {
			mask = (mask * 2) + 1;
		}
		else if(m > i)
		{
			mask <<= 1;
		}
	}

	printf("%0#x\n", mask);
	printf("입력값 %d의 %d~%d비트를 반대로 지정: %d\n", num, m, n, num ^ mask);
	printf("입력값 %d의 %d~%d 이외의 비트를 1로 지정: %d\n", num, m, n, num | ~mask);
	printf("입력값 %d의 %d~%d비트를 1로 지정: %d\n", num, m, n, num | mask);
	printf("입력값 %d의 %d~%d비트를 0으로 지정: %d\n", num, m, n, num & ~mask);

	return 0;
}