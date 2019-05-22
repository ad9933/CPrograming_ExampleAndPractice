#include "honeyheader.h"
#include "hfunc.h"
#include "gvals.h"

int main(void)
{
	srand((unsigned)time(NULL));

	int num;
	int atmpt = 0;
	int success = 0;

	fp = fopen("result.txt", "a");

	if (fp == NULL)
	{
		printf("파일 열기 실패\n");
		exit(1);
	}

	fseek(fp, 0, SEEK_END);

	while (1)
	{
		printf("숫자 갯수 입력 (0일경우 게임 종료) : ");
		scanf("%d", &num);

		if (num == 0)
			exit(0);

		makenumber(num);

		while (!success)
		{
			atmpt++;
			inputnumber(num);
			success = decision(num);
		}

		printf("%d 번 시도후 성공\n", atmpt);

		fprintf(fp, "컴퓨터 : ");
		for (int i = 0; i < num; i++)
		{
			fprintf(fp, "%d ", rnum[i]);
		}
		fprintf(fp, ", 시도 %d 회\n", atmpt);
		fflush(fp);
		
	}

	fclose(fp);

	return 0;
}