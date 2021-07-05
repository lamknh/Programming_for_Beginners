//2019117865 김나형
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char code1[] = "JMARTYVXBDLQNCXGZEKIPUFOHS0";
	char code2[] = "abcdefghijklmnopqrstuvwxyz";
	char c;

	printf("입력문자열 >> ");

	do {
		scanf("%c", &c);

		for (int i = 0; i < sizeof(code2); i++) {
			if (c == code1[i]) {
				printf("%c", code2[i]);
			}
		}

		if (c == ' ') {
			printf(" ");
		}
	} while (c >= 'A' || c == ' ');
	
	return 0;
}