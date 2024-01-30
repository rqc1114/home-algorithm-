#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 1000

int main(void)
{
	int n, p;
	int s, e;
	int idx = 0;
	int G[N];
	int X[N] = {0};

	scanf("%d %d", &n, &p);

	while (1)
	{
		if (idx == 0)
		{
			G[idx] = n;
			X[G[idx]]++; idx++;
		}

		else
		{
			G[idx] = G[idx - 1] * n % p;
			X[G[idx]]++;

			if (X[G[idx]] == 2)
			{
				for (int i = 0; i < idx; i++)
				{
					if (G[i] == G[idx])
					{
						s = i, e = idx - 1;
					}
				}
				printf("%d\n", e - s + 1);
				break;
			}

			idx++;
		}
	}


	return 0;
}