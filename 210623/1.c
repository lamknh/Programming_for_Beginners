//2019117865 ±è³ªÇü
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	printf("%d\n", 3 && 1 || 0);
	printf("%d\n", 5 - 1 != sizeof(int));
	printf("%d\n", 3 == 4 ? 3 - 5 : 4 % 3);
	printf("%d\n", 0 || !2);
	printf("%d\n", ~~5 >> 2 << 3 << 1);
	printf("%d\n", 3 / !0 == 0);
	printf("%lf\n", (double)((int)3.4 + 5.5));
	printf("%d\n", 1 | 3 & 11);

	printf("%d\n", sizeof 'a' + sizeof(char));
	int a, b; a = 1;
	printf("%d\n", b = a = 3);
	a = 16;
	a << 2; a <<= 2;
	printf("%d", a);

	return 0;
}