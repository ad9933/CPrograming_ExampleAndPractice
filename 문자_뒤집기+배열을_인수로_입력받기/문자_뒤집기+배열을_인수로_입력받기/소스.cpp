#include <stdio.h>

int wordlength(char str[100])      //3��3�� ���� : ��Ȯ���� �迭�� �Է¹޴� ���� �ƴϴ�. char str[100] �� char * str ��� �������̸� ����� ����. �ٸ� char * str �� �迭�� ���ڷ� ���޵ȴٴ� ������ �� ���ϰ� �شٰ� �Ѵ�.
{                                  //�����ͷ� �Է¹޴� ���� �´�;;
	int length = 0;                //�����͸� char str[100]�� ���� �����ϴ� ���� �Ű����� ���𿡸� �����ϴٰ��Ѵ�.
	while (str[length] != 0)
	{
		length++;
	}
	printf("\n\n\nLength is %d\n\n\n", length);
	return length;
}

int main(void)
{
	int length = 0;
	int tmp = 0;
	char str[100];
	printf("Input word : ");
	scanf("%s", str);

	//while (str[length] != 0)
	//{
	//	length++;             //�ܾ� ���� �˾Ƴ��� length�� ����
	//}
	length = wordlength(str);


	printf("\n\n\n\n\n");

	for (tmp = length - 1; tmp >= 0; tmp--)
	{
		printf("%c", str[tmp]);
	}
	printf("\n\n");
	return 0;
}