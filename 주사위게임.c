#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int A[3];
	int i, j,k;
	int n,t,cnt = 1, m = 0, s;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d ", &A[i]);
		}

		for (k = 0; k < 2; k++)
		{
			if (A[k] == A[k + 1])
			{
				t = A[k], cnt++;
			}
		}

		if (cnt == 1)
		{
			for (k = 0; k < 3; k++) 
			{
				if (A[i] < A[i + 1])
					t = A[i + 1];
			}
			s = t * 100;
		}

		else if (cnt == 2)
		{
			s = 1000 + t * 100;
		}

		else
		{
			s = 10000 + t * 1000;
		}

		if (m < s)
			m = s;
	}

	printf("%d\n", m);

	return 0;
}