#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int A[5];
	int t;
	int s = 0, avg, m;

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &A[i]);
		s += A[i];
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5 - i - 1; j++)
		{
			if (A[j] > A[j + 1])
			{
				t = A[j];
				A[j] = A[j + 1];
				A[j + 1] = t;
			}
		}
	}

	avg = s / 5;
	m = A[(0 + 4) / 2];

	printf("%d\n%d", avg, m);

	return 0;
}