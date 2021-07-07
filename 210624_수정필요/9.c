//2019117865김나형
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, a1, a2, a3, zero;
	printf("정수를 입력하시오: ");
	scanf("%d", &a);

	a1 = a2 = a3 = a;

	int mask = 0xf000; // 0x0000f000

	a1 &= ~mask;
	a2 |= mask;
	a3 ^= mask;

	printf("13~16번째 비트에 대해 0으로 지정한 수: %d\n", a1);
	printf("13~16번째 비트에 대해 1으로 지정한 수: %d\n", a2);
	printf("13~16번째 비트에 대해 0은 1로 1은 0으로 바꾼 수: %d\n", a3);
	return 0;
}