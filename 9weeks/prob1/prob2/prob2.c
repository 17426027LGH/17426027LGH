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
	struct book s1 = { "��Ī" },
		s2 = { "����" },
		s3 = { "288��" },
		s4 = { "13000��" };

	printf("%s, ", s1);
	printf("%s, ", s2);
	printf("%s, ", s3);
	printf("%s\n", s4);

	struct book a1 = { "��Ī2" },
		a2 = { "����" },
		a3 = { "384��" },
		a4 = { "17000��" };

	printf("%s, ", a1);
	printf("%s, ", a2);
	printf("%s, ", a3);
	printf("%s\n", a4);

	struct book b1 = { "����� �µ��� ���� �ʰ�" },
		b2 = { "����ɸ�" },
		b3 = { "196��" },
		b4 = { "14000��" };

	printf("%s, ", b1);
	printf("%s, ", b2);
	printf("%s, ", b3);
	printf("%s", b4);

	return 0;
}