#include <stdio.h>

int main(void)
{
	int num = 0;
	int tmpres = 0;
	int remain[80];                         //나머지 값들이 저장될 배열이다
	int idx = 0;
	int tmpidx = 0;

	printf("Input num :");
	scanf("%d", &num);

	while (num != 1)
	{
		remain[idx] = num % 2;             //나머지를 구해서 remain[0]부터 차례대로 저장한다
		num = num / 2;
		if (num != 1)                      //idx 값은 저장한 값이 끝나는 지점을 알기 위해서 1씩 더해지며 마지막계산에서는 더하지 않는다.
			idx++;
	}

	printf("\nresult is ");
	printf("1");                           //맨앞자리 1을 미리 출력해놓는다.
	for (tmpidx = idx; tmpidx != -1; tmpidx--) //위에서 remain[0]부터 저장했으니 remain[마지막 계산부분]에서부터 거꾸로 출력한다.
	{
		printf("%d", remain[tmpidx]);
	}
	printf("\n");

	return 0;
}