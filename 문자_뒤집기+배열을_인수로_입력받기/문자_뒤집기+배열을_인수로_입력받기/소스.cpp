#include <stdio.h>

int wordlength(char str[100])      //3월3일 수정 : 정확히는 배열을 입력받는 것이 아니다. char str[100] 과 char * str 모두 같은뜻이며 결과도 같다. 다만 char * str 가 배열이 인자로 전달된다는 느낌을 더 강하게 준다고 한다.
{                                  //포인터로 입력받는 것이 맞다;;
	int length = 0;                //포인터를 char str[100]과 같이 선언하는 경우는 매개변수 선언에만 가능하다고한다.
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
	//	length++;             //단어 길이 알아내서 length에 저장
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