#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int A[7];
	int i, j;
	int t, m;


	for (int i = 0; i < 7; i++)
	{
		scanf("%d", &A[i]);
	}

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 7 - i - 1; j++)
		{
			if (A[j] > A[j + 1])
			{
				t = A[j];
				A[j] = A[j + 1];
				A[j + 1] = t;
			}
		}
		m = A[7 - i - 1];
		printf("%d\n", m);
	}

	return 0;
}