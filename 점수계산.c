#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int A[100];
	int S[100];
	int n, res = 0, t = 1;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}

	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			S[i] = 1;
		}

		else
		{
			if (A[i] == 0)
			{
				S[i] = 0;
			}
			else
			{
				S[i] = t;
				t++;
				
				if (A[i + 1] == 0)
				{
					t = 1;
				}
			}
		}
	}

	printf("\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", S[i]);
		res += S[i];
	}

	
	printf("\n%d\n", res);

	return 0;

}
