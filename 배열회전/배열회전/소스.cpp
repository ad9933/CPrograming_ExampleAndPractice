#include <stdio.h>

void showarr(int(*arrptr)[4])//�迭 �����ִ� �Լ�
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
	}//tmparr�� �ӽ÷� �� ����

	for (int idx1 = 0; idx1 < 4; idx1++)
	{
		for (int idx2 = 0; idx2 < 4; idx2++)
		{
			arrptr[idx1][idx2] = tmparr[idx1][idx2];
		}
	}//tmparr�� arr�� �� �ű�

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
	} //�迭 �ʱ�ȭ(�������� �־������)

	showarr(arr);

	printf("1��° ���� \n\n");
	mixarr(arr);
	showarr(arr);

	printf("2��° ����\n\n");
	mixarr(arr);
	showarr(arr);

	printf("3��° ����\n\n");
	mixarr(arr);
	showarr(arr);

	return 0;
}