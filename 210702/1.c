//2019117865 �質��
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

	printf("�������� �Է��Ͻÿ�: ");
	gets(input_string);
	system("cls");

	for (int j = 0; j < 50; j++) {

		strncpy(display_string, input_string + i, len);
		printf("%s", display_string);
		
		display_string[strlen(input_string) - 1] = input_string[0];
		
		strcpy(input_string, display_string); //��� ���ڿ��� �Է� ���ڿ��� ����

		Sleep(500);
		system("cls");
		
	}

	return 0;
}