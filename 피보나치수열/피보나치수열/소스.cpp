#include <stdio.h>

int main(void)
{
	int many = 0;                            //몇번째 수까지 출력할지를 저장하는 변수
	unsigned long long num1 = 0;
	unsigned long long num2 = 1;
	unsigned long long num3 = 0;
	printf("How Many? : ");
	scanf("%d", &many);
	printf("0 1 ");                         //1,2 번째 수는 반복문을 사용하지 않고 출력한다.
	for (int tic = 1; tic < many; tic++)    //for 문을 활용해서 전의 두 수를 더하고 num3에 저장한후 이를 출력한후
	{                                       //하나씩 밀어내는 방식이다.
		num3 = num2 + num1;
		printf("%lld ", num3);
		num1 = num2;
		num2 = num3;
	}
	printf("\n");
	return 0;
}