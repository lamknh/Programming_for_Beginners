//2019117865김나형
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num, val;
	printf("정수 입력 : ");
	scanf("%d", &num);

	int mask = 0xff;

	val = num;
	for (int i = 0; i < 15; i++) {
		val &= mask;
	}
	val <<= 4;
	printf("%d\n", val);

	if (val > 178) {
		printf("최하위 8비트를 4비트 이동한 값이 178보다 큽니다.");
	}
	else if (val == 178) {
		printf("최하위 8비트를 4비트 이동한 값이 178과 같습니다.");
	}
	else {
		printf("최하위 8비트를 4비트 이동한 값이 178보다 작습니다.");
	}
	return 0;
}