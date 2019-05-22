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
		printf("���� ���� ����\n");
		exit(1);
	}

	fseek(fp, 0, SEEK_END);

	while (1)
	{
		printf("���� ���� �Է� (0�ϰ�� ���� ����) : ");
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

		printf("%d �� �õ��� ����\n", atmpt);

		fprintf(fp, "��ǻ�� : ");
		for (int i = 0; i < num; i++)
		{
			fprintf(fp, "%d ", rnum[i]);
		}
		fprintf(fp, ", �õ� %d ȸ\n", atmpt);
		fflush(fp);
		
	}

	fclose(fp);

	return 0;
}