#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	int x = rand() % 100 + 1;

	printf("Number : %d\n", x);

	int answer = 0;
	int chance = rand() % ((10 - 3) + 1) + 3;

	while (chance > 0)
	{

		printf("Chance : %d ¹ø\n", chance--);
		printf("Guess the numbers (1 ~ 100)\n");
		scanf_s("%d", &answer);

		if (answer > x)
		{
			printf("down \n");
		}
		else if (answer < x)
		{
			printf("up \n");
		}
		else if (answer = x)
		{
			printf("Correct. \n");
			break;
		}
	}
	return 0;

}