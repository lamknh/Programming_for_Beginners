//2019117865 김나형
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int num;
	char name[10];
	float mid;
	float final;
	float total;
	double average;
}SCORE;

int main()
{
	FILE* fp = NULL, *outfp = NULL;
	//SCORE score[5];
	SCORE* score = NULL;
	int num = 0;
	
	if ((fp = fopen("input.txt", "r")) == NULL) {
		exit(1);
	}

	if ((outfp = fopen("output.txt", "w")) == NULL) {
		exit(1);
	}

	fscanf(fp, "%d", &num);
	score = (SCORE*)malloc(sizeof(SCORE) * num); // 숫자 읽어와 동적할당

	printf("순서 이름   중간   기말   총점    평균\n");
	printf("-----------------------------------------\n");
	fprintf(outfp, "순서 이름   중간   기말   총점    평균\n");
	fprintf(outfp, "-----------------------------------------\n");
		
	for (int i = 0; i < num; i++) {
		fscanf(fp, "%d %s %f %f", &score[i].num, &score[i].name, &score[i].mid, &score[i].final);

		score[i].total = score[i].mid + score[i].final;
		score[i].average = score[i].total / 2; // 총점 및 평균 계산

		printf("%2d %4s %6.1f %6.1f %6.1f %6.1f\n", score[i].num, score[i].name, score[i].mid, score[i].final, score[i].total, score[i].average);
		fprintf(outfp, "%2d %4s %6.1f %6.1f %6.1f %6.1f\n", score[i].num, score[i].name, score[i].mid, score[i].final, score[i].total, score[i].average);
	}//파일 화면 동시 출력

	fclose(fp);
	fclose(outfp);
	free(score); //메모리 해제, file close


	return 0;
}