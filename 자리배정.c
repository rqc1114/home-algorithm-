#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 1000

typedef struct position
{
	int x;
	int y;
}p;

enum{top=1,right=2,down=3,left=4};

int main(void)
{
	int A[N][N]; //[0][0]�ƴ� [1][1]���� ����
	p B[1000000];
	int c, r, k;
	int x = 1, y = 1,n=1;
	int d;

	scanf("%d %d", &c, &r);
	scanf("%d", &k);

	for (int i = 0; i <= c + 1; i++) //���ٹ��� ������ 1��
	{
		for (int j = 0; j <= r + 1; j++)
		{
			A[i][j] = 1;
		}
	}

	for (int i = 1; i <= c; i++) //��δ� 0���� �ʱ�ȭ 0�� �ƴ� ��� ���� �ٲ��ֵ���
	{
		for (int j = 1; j <= r; j++)
		{
			A[i][j] = 0;
		}
	}

	d = top;

	while (1)
	{
		if (d == top)
		{
			if (y + 1 != 0)
			{

			}
			else
			{

			}

		}

		else if (d == right)
		{
			if (x + 1 != 0)
			{

			}
			else
			{

			}
		}

		else if (d == down)
		{
			if (y - 1 != 0)
			{

			}
			else
			{

			}
		}

		else
		{
			if (x - 1 != 0)
			{

			}
			else
			{

			}
		}
	}


	return 0;
}