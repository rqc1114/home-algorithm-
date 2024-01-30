#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define N 20

int main(void)
{
	char a[N], b[N], c[N], d[N], e[N];
	int i,j;
	int s = 0;
	int cnt = 0;

	scanf("%s", a);
	scanf("%s", b);
	scanf("%s", c);
	scanf("%s", d);
	scanf("%s", e);

	for (i = 0; i < 5; i++) //이 부분을 strlen함수 없이 똑같이 구현
	{
		for (j = 0; j < N + 1; j++);
		{
			 //if()
		}
	}

	printf("%d\n", s);

	return 0;
}