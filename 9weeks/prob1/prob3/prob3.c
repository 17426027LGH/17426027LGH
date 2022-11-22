#include <stdio.h>

struct cracker
{
	int price;
	int calories;
};

int main(void)
{
	struct cracker basasak;
	printf(" 바사삭의 가격과 열량 : ");
	scanf_s("%d%d", &basasak.price, &basasak.calories);
	printf("바사삭의 가격 : %d원\n", basasak.price);
	printf("바사삭의 열량 : %dkcal", basasak.calories);

	return 0;
}