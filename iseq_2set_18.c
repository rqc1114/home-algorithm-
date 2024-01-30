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

	for (int i = 0; i < 5; i++) //5개의 단어를 입력받을때 꼭 2차원 배열로 받아야 하는지, 받아야 한다면 왜 이 문법이 성립하는지
	{
		gets(c[i]);
	}

	for (i = 0; i < 5; i++) //이 부분을 strlen함수 없이 똑같이 구현
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