//2019117865김나형
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, val;
	printf("정수를 하나 입력하십시오 : ");
	scanf("%d", &n);

	val = n;

	int mask = 0xffff;

	for (int i = 0; i < 15; i++) {
		val &= mask;
	}
	
	printf("입력값 %d의 하위 16비트는 8진수로 %#o, %#x\n", n, val, val);
	return 0;
}