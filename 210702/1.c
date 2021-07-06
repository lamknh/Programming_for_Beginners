//2019117865 김나형
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include <windows.h>


int main(void)
{
	int len = 20, i = 1;
	char input_string[21] = "";
	char display_string[21];

	printf("광고문구를 입력하시오: ");
	gets(input_string);
	system("cls");

	for (int j = 0; j < 50; j++) {

		strncpy(display_string, input_string + i, len);
		printf("%s", display_string);
		
		display_string[strlen(input_string) - 1] = input_string[0];
		
		strcpy(input_string, display_string); //출력 문자열을 입력 문자열에 복사

		Sleep(500);
		system("cls");
		
	}

	return 0;
}