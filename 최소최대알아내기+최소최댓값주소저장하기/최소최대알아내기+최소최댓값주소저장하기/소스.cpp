#include <stdio.h>

void getmaxandmin(int arrlength, int * arrptr, int ** maxptr2, int ** minptr2)       //�μ��� �迭�� ����, �迭�� ù��° ���� �ּ�, �迭���� ����ũ�ų� �������� ����� �������� �ּҸ� �Է¹޴´�.
{                                                                                    //arrlength �� �ٸ����� �ָ� ���̰� �ٸ� �迭���� ������� �������̴�...�Ƹ�
	int idx = 0;
	int * tmaxptr = &arrptr[0];
	int * tminptr = &arrptr[0];

	for (idx = 0; idx < arrlength - 1; idx++)           //�ݺ����� �̿��� �ִ�, �ּڰ��� �ּҸ� �����Ѵ�.
	{
		if (*tmaxptr < arrptr[idx + 1])
		{
			tmaxptr = &arrptr[idx + 1];
		}
	}

	for (idx = 0; idx < arrlength - 1; idx++)
	{
		if (*tminptr > arrptr[idx + 1])
		{
			tminptr = &arrptr[idx + 1];
		}
	}

	printf("Max num is %d\n", *tmaxptr);              //�ִ�,�ּڰ��� ����Ѵ�.
	printf("Min num is %d\n", *tminptr);

	*maxptr2 = tmaxptr;                               //�μ��� ���� �ּҿ� �ּڰ��� �������ش�. (���������� Ȱ��)
	*minptr2 = tminptr;
}

int main(void)
{
	int * maxptr = NULL;
	int * minptr = NULL;
	int arr[5];
	int idx = 0;
	int maxnum = 0, minnum = 0;

	printf("Input 5 numbers\n");

	for (idx = 0; idx < 5; idx++)                       //�ݺ����� ����� 5���� ���� �Է¹޾� �迭�� �����Ѵ�.
	{
		printf("%d Number input : ", idx + 1);
		scanf("%d", &arr[idx]);
	}

	printf("\nStart of array is %p\n\n", arr);          //����� ������ �ƴ����� Ȯ���ϱ� ���ؼ� �迭 �������� ����Ѵ�.

	getmaxandmin(5, arr, &maxptr, &minptr);

	printf("Max array addr is %p\n", maxptr);
	printf("Min array addr is %p\n", minptr);

	return 0;
}