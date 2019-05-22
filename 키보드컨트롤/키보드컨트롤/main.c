#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void printmat(char(*arr)[5])
{
	for (int idx1 = 0; idx1 < 5; idx1++)
	{
		for (int idx2 = 0; idx2 < 5; idx2++)
			printf("%2c ", arr[idx1][idx2]);
		printf("\n");
	}
}

int main(void)
{
	char arr[5][5] = { 0, };
	char buff;
	int x = 0;
	int y = 0;

	for (int idx1 = 0; idx1 < 5; idx1++)
	{
		for (int idx2 = 0; idx2 < 5; idx2++)
			arr[idx1][idx2] = '0';
	}

	arr[0][0] = 'X';

	printmat(arr);

	while ((buff = _getch()) != 'q')
	{
		arr[y][x] = '0';
		if (buff == 'w' && y != 0)
			y--;
		if (buff == 'a' && x != 0)
			x--;
		if (buff == 's' && y != 4)
			y++;
		if (buff == 'd' && x != 4)
			x++;
		arr[y][x] = 'X';
		printmat(arr);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	}

	return 0;
}