#include <stdio.h>

struct book
{
	char title[30];
	char author[20];
	int page;
	int price;
};

int main(void)
{
	struct book s1 = { "왓칭" },
		s2 = { "김상운" },
		s3 = { "288쪽" },
		s4 = { "13000원" };

	printf("%s, ", s1);
	printf("%s, ", s2);
	printf("%s, ", s3);
	printf("%s\n", s4);

	struct book a1 = { "왓칭2" },
		a2 = { "김상운" },
		a3 = { "384쪽" },
		a4 = { "17000원" };

	printf("%s, ", a1);
	printf("%s, ", a2);
	printf("%s, ", a3);
	printf("%s\n", a4);

	struct book b1 = { "기분이 태도가 되지 않게" },
		b2 = { "레몬심리" },
		b3 = { "196쪽" },
		b4 = { "14000원" };

	printf("%s, ", b1);
	printf("%s, ", b2);
	printf("%s, ", b3);
	printf("%s", b4);

	return 0;
}