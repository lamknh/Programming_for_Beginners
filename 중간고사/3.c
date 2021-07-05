//2019117865 김나형
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num, remainer, dec = 10, min = 0, max = 0, i = 0;
	int plus, ten1 = 1, ten2 = 1;
	int ary[10] = { 0 }, ary2[10] = { 0 };
	scanf("%d", &num);

	while (num > 0) {
		remainer = num % dec;
		ary[remainer]++; ary2[remainer]++;
		num /= dec;
		i++;
	}

	for (int j = 0; j < i -1 ; j++) {
		ten1 *= 10;
		ten2 *= 10;
	}

	for (int j = 0; j < 10; j++) {
		if (ary[j] != 0) {
			
			if (ary[j] > 1) {
				for (int k = 0; k < ary[j] + 1; k++) {
					min += j * ten1;
					ten1 /= 10;
					ary[j]--;
				}
			}
			min += j * ten1;
			ten1 /= 10;
		}
	}

	for (int j = 9; j > -1; j--) {
		if (ary2[j] != 0) {

			if (ary2[j] > 1) {
				for (int k = 0; k < ary2[j] ; k++) {
					max += j * ten2;
					ten2 /= 10;
					ary2[j]--;
				}
			}
			max += j * ten2;
			ten2 /= 10;
		}
	}



	printf("최대값: %d\n", max);
	printf("최소값: %d", min);
	return 0;
}