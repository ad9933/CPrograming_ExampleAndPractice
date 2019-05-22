#include <stdio.h>

int njaegop(int num, int num2)
{
	int idx = 0;
	int tmp = num;
	for (idx = 1; idx < num2; idx++)
	{
		tmp = tmp * num;
	}
	return tmp;
}

int main(void)
{
	int num1 = 0, num2 = 0;
	printf("Input n square something : ");
	scanf("%d %d", &num1, &num2);
	printf("Input is %d, %d\n", num1, num2);
	printf("\n\nresult is %d\n", njaegop(num1, num2));
	return 0;
}