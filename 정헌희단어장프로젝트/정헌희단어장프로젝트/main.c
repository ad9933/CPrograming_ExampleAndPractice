#include "inc.h"
#include "struct.h"
#include "funcs.h"

FILE * memo;

const word emptywrd = { {0, }, {0, }, 0 };

int main(void)
{
	int sel;
	word wrdbuff = { {0, }, {0, }, 0 };

	while (1)
	{
		sel = soptions();
		switch (sel)
		{
			case 1:
				wopenfile();
				getwrd(&wrdbuff);
				writefile(&wrdbuff);
				fclose(memo);

				break;

			case 2:
				if (ropenfile() == 1)
					break;
				while (readfile(&wrdbuff) != 1)
				{
					printf("%s %s %d\n", wrdbuff.spell, wrdbuff.mean, wrdbuff.flag);
				}
				fclose(memo);

				break;

			case 9:
				exit(0);
		}
	}

	return 0;
}