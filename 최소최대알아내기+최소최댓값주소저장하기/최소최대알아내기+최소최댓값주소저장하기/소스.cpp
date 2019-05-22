#include <stdio.h>

void getmaxandmin(int arrlength, int * arrptr, int ** maxptr2, int ** minptr2)       //인수로 배열의 길이, 배열의 첫번째 변수 주소, 배열에서 가장크거나 작은값이 저장될 포인터의 주소를 입력받는다.
{                                                                                    //arrlength 에 다른값을 주면 길이가 다른 배열에도 써먹을수 있을것이다...아마
	int idx = 0;
	int * tmaxptr = &arrptr[0];
	int * tminptr = &arrptr[0];

	for (idx = 0; idx < arrlength - 1; idx++)           //반복문을 이용해 최댓값, 최솟값의 주소를 저장한다.
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

	printf("Max num is %d\n", *tmaxptr);              //최댓값,최솟값을 출력한다.
	printf("Min num is %d\n", *tminptr);

	*maxptr2 = tmaxptr;                               //인수로 받은 주소에 주솟값을 저장해준다. (더블포인터 활용)
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

	for (idx = 0; idx < 5; idx++)                       //반복문을 사용해 5개의 수를 입력받아 배열에 저장한다.
	{
		printf("%d Number input : ", idx + 1);
		scanf("%d", &arr[idx]);
	}

	printf("\nStart of array is %p\n\n", arr);          //결과가 제데로 됐는지를 확인하기 위해서 배열 시작점을 출력한다.

	getmaxandmin(5, arr, &maxptr, &minptr);

	printf("Max array addr is %p\n", maxptr);
	printf("Min array addr is %p\n", minptr);

	return 0;
}