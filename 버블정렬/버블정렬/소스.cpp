#include <stdio.h>

int main(void)
{
	int arr[4];
	int tmp = 0;
	int idx = 0, idx2 = 4, idx3 = 0;

	printf("Get 4 numbers\n\n");

	for (idx = 0; idx < 4; idx++)
	{
		printf("Input %d number : ", idx + 1);
		scanf("%d", &arr[idx]);
	}
	printf("4 numbers saved\n\n");

	for (idx2 = 3; idx2 != 0; idx2--)
	{
		for (idx = 0; idx < idx2; idx++)
		{
			if (arr[idx] > arr[idx + 1])
			{
				tmp = arr[idx + 1];
				arr[idx + 1] = arr[idx];
				arr[idx] = tmp;
			}

		}
	}

	printf("Result out : ");

	for (idx3 = 0; idx3 < 4; idx3++)
	{
		printf("%d ", arr[idx3]);
	}
	printf("\n");


	return 0;
}