#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));

	for (int i = 0; i < 10; i++)
	{
		int random = rand() % 9;
		printf("   %d", random);
	}

	int a[10];
	int i, s = 0, s2 = 0;
	double e, v, sigma;
	for (i = 0; i < 10; i++)
	{
		printf("\n Put in the %dth number. : ", i + 1);
		scanf_s("%d", &a[i]);
		s += a[i];
		s2 += a[i] * a[i];
	}
	e = s / 10.0;
	v = s2 / 10.0 - e * e;
	sigma = sqrt(v);
	printf("%lf %lf %lf", e, v, sigma);

	return 0;
}