#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char A[3][4] = { 0 };
	int x=0,y=0; //x�� ��(0)�ǰ��� y�� ��(1)�� ������ �ǹ�

	for (int i = 0; i < 3; i++)
	{
		scanf("%s", A[i]);
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (A[i][j] == '0')
				x++;
			else
				y++;
		}

		if (x == 1 && y == 3)//��
		{
			printf("A");
		}

		else if (x == 2 && y == 2)//��
		{
			printf("B");
		}

		else if (x == 3 && y == 1)//��
		{
			printf("C");
		}

		else if (x == 4)//��
		{
			printf("D");
		}

		else//��
		{
			printf("E");
		}
		x = 0, y = 0;
	}

	printf("\n");
	return 0;
}