#include <stdio.h>

void arrout(int * arraddr)
{
	int idx = 0;
	for (idx = 0; idx < 3; idx++)
		printf("\narr[%d] is %d\n", idx, arraddr[idx]);
	printf("arraddr inside : %p\n", arraddr);
	arraddr = arraddr + 1;
	printf("arraddr inside 2 : %p\n", arraddr);
	*arraddr = *arraddr + 1;
	printf("arr[2] now is %d\n", *arraddr);

	return;
}

int main(void)
{
	int idx = 0;
	int arr[3];
	printf("arr addr is %p\n", arr);
	for (idx = 0; idx < 3; idx++)
	{
		printf("input on arr[%d] :", idx);
		scanf("%d", &arr[idx]);
	}

	arrout(arr);

	printf("arr[2] final %d\n", arr[2]);
	return 0;
}