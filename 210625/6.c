//2019117865�質��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 4; j++) {
			printf("%d * %d = %d\t", j, i, i * j);
		}
		puts("");
	}
	puts("");

	for (int i = 1; i < 10; i++) {
		for (int j = 4; j < 7; j++) {
			printf("%d * %d = %d\t", j, i, i * j);
		}
		puts("");
	}
	puts("");

	for (int i = 1; i < 10; i++) {
		for (int j = 7; j < 10; j++) {
			printf("%d * %d = %d\t", j, i, i * j);
		}
		puts("");
	}
	puts("");

	return 0;
}