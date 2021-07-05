//2019117865김나형
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;
	printf("정수 1개를 입력하세요: \n");
	scanf("%d", &num);
	puts("");

	if (num >= 1 || num <= 10) {
		switch (num) {
		case 1:
			printf("1의 로마숫자는 I입니다.");
			break;
		case 2:
			printf("2의 로마숫자는 II입니다.");
			break;
		case 3:
			printf("3의 로마숫자는 III입니다.");
			break;
		case 4:
			printf("4의 로마숫자는 IV입니다.");
			break;
		case 5:
			printf("5의 로마숫자는 V입니다.");
			break;
		case 6:
			printf("6의 로마숫자는 VI입니다.");
			break;
		case 7:
			printf("7의 로마숫자는 VII입니다.");
			break;
		case 8:
			printf("8의 로마숫자는 VIII입니다.");
			break;
		case 9:
			printf("9의 로마숫자는 IX입니다.");
			break;
		case 10:
			printf("10의 로마숫자는 X입니다.");
			break;
		}
	}
	return 0;
}