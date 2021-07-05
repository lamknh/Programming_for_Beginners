//2019117865 ±è³ªÇü
#include <stdio.h>

int main(void)
{
	printf("10 : %d\n", sizeof(10));
	printf("0x18 : %d\n", sizeof(0x18));
	printf("3.14 : %d\n", sizeof(3.14));
	printf("17.1e-3 : %d\n", sizeof(17.1e-3));
	printf("3.14F : %d\n", sizeof(3.14F));
	printf("'A' : %d\n", sizeof('A'));

	return 0;
}