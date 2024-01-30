#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	int min = 103, s = 0;

	for (int i = 0; i < 7; i++)
	{
		scanf("%d", &n);
		if (n % 2 == 1)
		{
			s += n;
			if (n < min)
			{
				min = n;
			}
		}
	}

	if (s == 0) //홀수가 존재하지 x 경우
	{
		printf("-1\n");
	}

	else
	{
		printf("%d\n%d", s, min);
	}

	return 0;
}