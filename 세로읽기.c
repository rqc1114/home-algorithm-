#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char A[5][15];
	int m = 0;

	for (int i = 0; i < 5; i++)
	{
		scanf("%s", A[i]);
	}

	for (int i = 0; i < 5; i++) //15�ڸ� ��� ���� �ʰ� ���̰� ���� �� �ܾ ��������
	{
		if (m < strlen(A[i]))
			m = strlen(A[i]);
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (A[j][i] == ' ' || A[j][i] == '\0')
			{

			}
			else
				printf("%c", A[j][i]);
		}
	}

	return 0;
}