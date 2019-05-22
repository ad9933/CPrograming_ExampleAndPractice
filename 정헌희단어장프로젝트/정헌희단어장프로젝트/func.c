#include "inc.h"
#include "struct.h"

extern FILE * memo;
extern word emptywrd;

void wopenfile(void)
{
	memo = fopen("words.txt", "at");
	fseek(memo, 0, SEEK_END);
}

int ropenfile(void)
{
	memo = fopen("words.txt", "rt");
	if (memo == NULL)
	{
		printf("단어장 비어있음\n");
		return 1;
	}
	fseek(memo, 0, SEEK_SET);
	return 0;
}

void writefile(word * wrdptr)
{
	fprintf(memo, "%s\t%s\t%d\n", wrdptr->spell, wrdptr->mean, wrdptr->flag);
}

int readfile(word * wrdptr)
{
	int i = 0;
	int j = 0;
	char buff[80] = { 0, };

	*wrdptr = emptywrd;
	
	if (fgets(buff, 80, memo) == NULL)
		return 1;

	while (buff[i] != '\t')
	{
		wrdptr->spell[i] = buff[i];
		i++;
	}

	wrdptr->spell[i + 1] = '\0';

	i++;

	while (buff[i] != '\t')
	{
		wrdptr->mean[j] = buff[i];
		i++;
		j++;
	}

	wrdptr->mean[i + 1] = '\0';

	i++;

	wrdptr->flag = atoi(&buff[i]);

	return 0;
}

int soptions(void)
{
	int sel;
	printf("-----옵션-----\n");
	printf("1. 새로운 단어 저장\n");
	printf("2. 단어장 읽어오기\n\n");
	printf("9. 종료\n");
	printf("---------------\n");

	scanf("%d", &sel);

	if (sel != 1 && sel != 2 && sel != 9)
	{
		printf("잘못된 입력\n");
		return -1;
	}

	return sel;
}

void getwrd(word * wrdptr)
{
	printf("스펠링 입력 : ");
	scanf("%s", wrdptr->spell);
	printf("뜻 입력 : ");
	scanf("%s", wrdptr->mean);
	printf("중요도 입력 : ");
	scanf("%d", &(wrdptr->flag));

	return;
}