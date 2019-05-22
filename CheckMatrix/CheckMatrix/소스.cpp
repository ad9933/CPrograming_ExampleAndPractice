#include <stdio.h>
#define MAT_G 9                            //각각 가로, 세로 길이
#define MAT_S 8                            //수정함으로써 프로그램 조정가능

unsigned char matrix[MAT_S][MAT_G];

void printoptions(void)
{
	printf("Options\n");
	printf("1. View Matrix\n");
	printf("2. Select And Modify\n");
	printf("3. Quit\n");
	printf("Input : ");
}

void viewmatrix(void)
{
	int idx = 0;
	int idx2 = 0;

	printf("\n");

	for (idx2 = 0; idx2 < MAT_S; idx2++)
	{
		for (idx = 0; idx < MAT_G; idx++)
		{
			if (matrix[idx2][idx] > 99)
			{
				printf("%d ", matrix[idx2][idx]);
			}
			else if (matrix[idx2][idx] > 9)
			{
				printf("0%d ", matrix[idx2][idx]);
			}
			else
			{
				printf("00%d ", matrix[idx2][idx]);
			}
		}
		printf("\n");

	}
	
}

int main(void)
{

	char selection = 0;
	char matidx1 = 0, matidx2 = 0;
	char input = 0;

	while (1)
	{
		printoptions();
		scanf("%hhd", &selection);

		switch (selection)
		{
		case 1:
			viewmatrix();
			printf("\n");
			continue;

		case 2:
			printf("\nInput Address to Modify : ");
			scanf("%hhd %hhd", &matidx1, &matidx2);
			printf("Input number :");
			scanf("%hhd", &input);
			matrix[matidx2][matidx1] = input;
			printf("Modified!\n\n");
			continue;
		case 3:
			break;
		}
		break;
	}

	return 0;
}