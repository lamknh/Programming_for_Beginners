//2019117865 김나형
#include <stdio.h>

void calander(void)
{
	printf("\t\t\t2021년 06월\n");
	printf("일\t월\t화\t수\t목\t금\t토\n");
	printf("\t\t1\t2\t3\t4\t5\n");
	printf("6\t7\t8\t9\t10\t11\t12\n");
	printf("13\t14\t15\t16\t17\t18\t19\n");
	printf("20\t21\t22\t23\t24\t25\t26\n");
	printf("27\t28\t29\t30\n");
}

void human(void)
{
	printf("\n\n");
		printf("\t\t\t----------\n");
		printf("\t\t\tl --   -- l\n");
		printf("\t\t\tl    l    l\n");
		printf("\t\t\t----------\n");
		printf("\t\t\tl         l\n");
	printf("\t\t  ㅡㅡㅡ|         |ㅡㅡㅡ\n");
		printf("\t\t\t-----------\n");
		printf("\t\t\t   l    l\n");
		printf("\t\t\t   l    l\n");
}

int main(void)
{
	calander();
	human();
	return 0;
}