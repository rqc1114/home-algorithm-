#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define N 20

int main(void)
{
	char c[5][N];
	int s = 0;
	int cnt = 0;
	int i, j;

	for (int i = 0; i < 5; i++) //5���� �ܾ �Է¹����� �� 2���� �迭�� �޾ƾ� �ϴ���, �޾ƾ� �Ѵٸ� �� �� ������ �����ϴ���
	{
		gets(c[i]);
	}

	for (i = 0; i < 5; i++) //�� �κ��� strlen�Լ� ���� �Ȱ��� ����
	{
		cnt = 0;
		for (j = 0; j < N; j++)
		{
			if ((c[i][j] >= 'A' && c[i][j] <= 'Z') || (c[i][j] >= 'a' && c[i][j] <= 'z'))
				cnt++;
			else
				s += cnt;
				break;
		}
	}
	
	printf("%d\n", s);

	return 0;
}