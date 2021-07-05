//2019117865 김나형
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n = 0;
	char c;
	do {
		printf("알파벳 소문자 하나를 추측해 보시오.\n");
		scanf(" %c", &c);
		if (c < 'f') {
			printf("입력한 문자의 아스키 코드 값이 더 작습니다.\n");
			n++;
		}
		else if(c > 'f'){
			printf("입력한 문자의 아스키 코드 값이 더 큽니다.\n");
			n++;
		}
	} while (c != 'f');

	printf("정답입니다! 시도횟수는 %d번!", n);
	return 0;
}