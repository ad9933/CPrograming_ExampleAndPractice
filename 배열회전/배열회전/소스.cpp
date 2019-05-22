#include <stdio.h>

void showarr(int(*arrptr)[4])//배열 보여주는 함수
{
	for (int idx1 = 0; idx1 < 4; idx1++)
	{
		printf("   ");
		for (int idx2 = 0; idx2 < 4; idx2++)
		{
			printf("%2d ", arrptr[idx1][idx2]);
		}
		printf("\n");
	}
	return;
}

void mixarr(int(*arrptr)[4])
{
	int tmparr[4][4];
	for (int idx1 = 0; idx1 < 4; idx1++)
	{
		for (int idx2 = 0; idx2 < 4; idx2++)
		{
			tmparr[idx2][3 - idx1] = arrptr[idx1][idx2];
		}
	}//tmparr에 임시로 값 저장

	for (int idx1 = 0; idx1 < 4; idx1++)
	{
		for (int idx2 = 0; idx2 < 4; idx2++)
		{
			arrptr[idx1][idx2] = tmparr[idx1][idx2];
		}
	}//tmparr을 arr로 다 옮김

	return;
}

int main(void)
{
	int arr[4][4];
	int stnum = 1;

	for (int idx1 = 0; idx1 < 4; idx1++)
	{
		for (int idx2 = 0; idx2 < 4; idx2++)
		{
			arr[idx1][idx2] = stnum;
			stnum++;
		}
	} //배열 초기화(문제에서 주어진대로)

	showarr(arr);

	printf("1번째 실행 \n\n");
	mixarr(arr);
	showarr(arr);

	printf("2번째 실행\n\n");
	mixarr(arr);
	showarr(arr);

	printf("3번째 실행\n\n");
	mixarr(arr);
	showarr(arr);

	return 0;
}