//2019117865 김나형
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void origin(FILE * fout, FILE* fp, int image[][10]) {
	char line[30];

	printf("[Original Image]\n");
	fprintf(fout, "[Original Image]\n");
	for (int y = 0; y < 10; y++) {
		fgets(line, sizeof(line), fp);
		sscanf(line, "%d %d %d %d %d %d %d %d %d %d ",
			&image[y][0], &image[y][1], &image[y][2], &image[y][3],
			&image[y][4], &image[y][5], &image[y][6], &image[y][7],
			&image[y][8], &image[y][9]);
		printf("%d %d %d %d %d %d %d %d %d %d \n",
			image[y][0], image[y][1], image[y][2], image[y][3],
			image[y][4], image[y][5], image[y][6], image[y][7],
			image[y][8], image[y][9]); // 파일 읽어 배열에 저장 및 원본 데이터 출력
		fprintf(fout, "%d %d %d %d %d %d %d %d %d %d \n",
			image[y][0], image[y][1], image[y][2], image[y][3],
			image[y][4], image[y][5], image[y][6], image[y][7],
			image[y][8], image[y][9]);
	}
	puts("");
	fprintf(fout, "\n");
}

void rotate(FILE* fout, FILE* fp, int image[][10]) {
	int rotate[10][10];
	printf("[Rotate CCW90]\n");
	fprintf(fout, "[Rotate CCW90]\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			rotate[i][j] = image[j][9-i];
		}
		printf("%d %d %d %d %d %d %d %d %d %d \n",
			rotate[i][0], rotate[i][1], rotate[i][2], rotate[i][3],
			rotate[i][4], rotate[i][5], rotate[i][6], rotate[i][7],
			rotate[i][8], rotate[i][9]);
		fprintf(fout, "%d %d %d %d %d %d %d %d %d %d \n",
			rotate[i][0], rotate[i][1], rotate[i][2], rotate[i][3],
			rotate[i][4], rotate[i][5], rotate[i][6], rotate[i][7],
			rotate[i][8], rotate[i][9]);
	}
	puts("");
	fprintf(fout, "\n");
}

void reverse(FILE* fout, FILE* fp, int image[][10]) {
	int reverse[10][10];
	printf("[Reverse Image]\n");
	fprintf(fout, "[Reverse Image]\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (image[i][j] == 1) {
				reverse[i][j] = 0;
			}
			else {
				reverse[i][j] = 1;
			} // !(not) 연산자 쓰면 한 줄로 해결
		}
		printf("%d %d %d %d %d %d %d %d %d %d \n",
			reverse[i][0], reverse[i][1], reverse[i][2], reverse[i][3],
			reverse[i][4], reverse[i][5], reverse[i][6], reverse[i][7],
			reverse[i][8], reverse[i][9]);
		fprintf(fout, "%d %d %d %d %d %d %d %d %d %d \n",
			reverse[i][0], reverse[i][1], reverse[i][2], reverse[i][3],
			reverse[i][4], reverse[i][5], reverse[i][6], reverse[i][7],
			reverse[i][8], reverse[i][9]);
	}
	puts("");
	fprintf(fout, "\n");
}

void mirror(FILE* fout, FILE* fp, int image[][10]) {
	int mirror[10][10];
	printf("[Mirror image]\n");
	fprintf(fout, "[Mirror image]\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			mirror[i][j] = image[9 - j][i];
		}
		printf("%d %d %d %d %d %d %d %d %d %d \n",
			mirror[i][0], mirror[i][1], mirror[i][2], mirror[i][3],
			mirror[i][4], mirror[i][5], mirror[i][6], mirror[i][7],
			mirror[i][8], mirror[i][9]);
		fprintf(fout, "%d %d %d %d %d %d %d %d %d %d \n",
			mirror[i][0], mirror[i][1], mirror[i][2], mirror[i][3],
			mirror[i][4], mirror[i][5], mirror[i][6], mirror[i][7],
			mirror[i][8], mirror[i][9]);
	}
}

int main()
{
	int image[10][10] = { 0 };
	FILE* fp;
	FILE* fout;
	
	if ((fp = fopen("num4.txt", "rb")) == NULL) { //읽기 모드로 열기
		exit(1);
	}
	if ((fout = fopen("image_out.txt", "a")) == NULL) {
		exit(1);
	}
	
	origin(fout, fp, image);
	rotate(fout, fp, image);
	reverse(fout, fp, image);
	mirror(fout, fp, image);
	
	fclose(fp);
	fclose(fout);

	return 0;
}