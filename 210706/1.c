//2019117865 김나형
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_array(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%-4d", arr[i]);
	}
	puts("");
}
void arraymerge(int* a, int an, int* b, int bn, int* c) { //int an: a 배열의 크기, int bn: b 배열의 크기
	int cn = 0;
	print_array(a, an);
	print_array(b, bn);

	int j = 0, k = 0;
	for (int i = 0; i < an + bn; i++) {
		if (a[j] < b[k]) {
			c[cn] = a[j];
			cn++; j++;
		}
		else if (a[j] == b[k]) {
			c[cn] = a[j];
			cn++; j++;
		}
		else {
			c[cn] = b[k];
			cn++; k++;
		}

		if (k > bn) {
			c[cn-1] = a[j];
		}
	}

	print_array(c, cn);
}

int main(void)
{
	int c[20] = { 0 };

	int a[] = { 1, 2, 5, 7, 9, 14, 17 };
	int b[] = { 2, 3, 6, 8, 14, 15 };

	arraymerge(a, 7, b, 6, c);

	return 0;
}