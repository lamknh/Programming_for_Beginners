//2019117865 �質��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char code1[] = "JMARTYVXBDLQNCXGZEKIPUFOHS0";
	char code2[] = "abcdefghijklmnopqrstuvwxyz";
	char c;

	printf("�Է¹��ڿ� >> ");

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