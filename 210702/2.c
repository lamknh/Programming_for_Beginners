//2019117865 김나형
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main(void)
{
	char message[100] = "";
	char temp;
	char* ptoken = NULL;

	printf("한 줄의 문장을 입력하세요. -> \n");
	gets(message);

	printf("입력한 각각의 단어를 반대로 출력합니다. -> \n");
	ptoken = strtok(message, " ");
	while (ptoken != NULL) {
		for (int i = strlen(ptoken) - 1; i >= 0; i--) {
			printf("%c", ptoken[i]);
		}
		printf(" ");
		ptoken = strtok(NULL, " ");
	}

	return 0;
}