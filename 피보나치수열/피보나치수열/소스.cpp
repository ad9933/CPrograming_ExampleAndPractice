#include <stdio.h>

int main(void)
{
	int many = 0;                            //���° ������ ��������� �����ϴ� ����
	unsigned long long num1 = 0;
	unsigned long long num2 = 1;
	unsigned long long num3 = 0;
	printf("How Many? : ");
	scanf("%d", &many);
	printf("0 1 ");                         //1,2 ��° ���� �ݺ����� ������� �ʰ� ����Ѵ�.
	for (int tic = 1; tic < many; tic++)    //for ���� Ȱ���ؼ� ���� �� ���� ���ϰ� num3�� �������� �̸� �������
	{                                       //�ϳ��� �о�� ����̴�.
		num3 = num2 + num1;
		printf("%lld ", num3);
		num1 = num2;
		num2 = num3;
	}
	printf("\n");
	return 0;
}