#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	int A[100000];
	int t,flag = 1, cnt = 1, x;
	int max = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) //한번에 10만자리 숫자를 입력해주도록 수정
	{
		scanf("%d", A[i]);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (A[j] != A[j + 1])
			{
				if (A[j] > A[j + 1])
				{
					cnt++, x = -1;
				}
				else if (A[j] < A[j + 1])
				{
					cnt++, x = +1;
				}

				if (t != x)
					flag = 0;

				t = x;
			}

			if (flag == 0)
			{
				if (max < cnt)
					max = cnt;
				cnt = 0;
				break;
			}
		}
	}

	printf("%d\n", max);

	return 0;
}