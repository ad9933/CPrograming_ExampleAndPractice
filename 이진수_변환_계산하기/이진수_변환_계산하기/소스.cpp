#include <stdio.h>

int main(void)
{
	int num = 0;
	int tmpres = 0;
	int remain[80];                         //������ ������ ����� �迭�̴�
	int idx = 0;
	int tmpidx = 0;

	printf("Input num :");
	scanf("%d", &num);

	while (num != 1)
	{
		remain[idx] = num % 2;             //�������� ���ؼ� remain[0]���� ���ʴ�� �����Ѵ�
		num = num / 2;
		if (num != 1)                      //idx ���� ������ ���� ������ ������ �˱� ���ؼ� 1�� �������� ��������꿡���� ������ �ʴ´�.
			idx++;
	}

	printf("\nresult is ");
	printf("1");                           //�Ǿ��ڸ� 1�� �̸� ����س��´�.
	for (tmpidx = idx; tmpidx != -1; tmpidx--) //������ remain[0]���� ���������� remain[������ ���κ�]�������� �Ųٷ� ����Ѵ�.
	{
		printf("%d", remain[tmpidx]);
	}
	printf("\n");

	return 0;
}