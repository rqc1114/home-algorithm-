#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int n1, n2;
	int g, l;

	int A[100];
	int B[100];

	int t = 1;

	scanf("%d %d", &n1, &n2);


	for (int i = 2; i <= n2; i++)
	{
		for (int j = 1; j <= n1; j++)
		{
			if (i == j && n2 % i == 0 && n1 % j == 0)
			{
				n1 /= i;
				n2 /= i;
				t *= i;
			}
		}
		if (i == 1)
		{
			g = t;
			l = t * n1 * n2;
			printf("%d %d\n", g, l);
			break;
		}
	}

	return 0;

}
