#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int A[9][9];
	int m=0,row,column;

	
	for (int i = 0; i < 9 * 9; i++)
	{
		scanf_s("%d", A+i);
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (m < A[i][j])
			{
				m = A[i][j];
				row = i+1, column = j+1;
			}
		}
	}

	printf("%d\n", m);
	printf("%d %d\n", row, column);

	return 0;

}
