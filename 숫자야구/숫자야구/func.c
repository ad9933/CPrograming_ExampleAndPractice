#include "honeyheader.h"
#include "gvals.h"

int grn(void) //0~9 사이 무작위수 생성
{
	int num;
	num = rand() % 10;
	return num;
}

void makenumber(int n)
{
	int j;
	rnum[0] = grn();
	for (int i = 1; i < n; i++)
	{
		j = 0;

		while (j < i)
		{

			if (rnum[i] == rnum[j])
			{
				rnum[i] = grn();
				j = 0;
				continue;
			}
			else
				j++;
		}

	}

	//디버그용
	//for (int i = 0; i < n; i++)
	//	printf("rand[%d] = %d ", i, rnum[i]);
	//printf("\n");
	//디버그용

	return;
}

void inputnumber(int n)
{
	printf("%d개 숫자 입력 : ", n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &inum[i]);
	}

	//디버그용
	//for (int i = 0; i < n; i++)
	//	printf("inum[%d] = %d ", i, inum[i]);
	//printf("\n");
	//디버그용

}

int decision(int n)	//맞추면 1, 틀리면 0 반환
{
	int strk = 0, ball = 0;
	
	for (int i = 0; i < n; i++)
	{
		if (rnum[i] == inum[i])
			strk++;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (inum[i] == rnum[j])
				ball++;
		}
	}

	ball = ball - strk;
	
	if (strk == n)
		return 1;
	else
		printf("%d strkie, %d ball\n", strk, ball);
	return 0;

}