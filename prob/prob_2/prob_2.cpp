#include <stdio.h>

int main(void)
{
	char ch;

	printf("Input : ");
	scanf_s("%c", &ch);
	printf("%c ASCII code value is %d ", ch, ch);
	
	return 0;
}