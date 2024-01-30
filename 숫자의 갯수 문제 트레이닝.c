#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y, z;
	int r;
	int A[10] = { 0 };

	scanf("%d", &x);

	scanf("%d", &y);

	scanf("%d", &z);

	r = x * y * z;

	while (1)
	{

		if (r == 1)
			break;

		A[r % 10]++;
		r /= 10;

	}

	for (int i = 0; i <= 9; i++)
	{
		printf("%d\n", A[i]);
	}

	return 0;

}
