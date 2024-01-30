#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct info
{
	int x;
	int y;
	int r;
}T;

int main(void)
{
	int n;
	T t[100];
	int cnt = 1;

	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &t[i].x, &t[i].y);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (t[i].x < t[j].x && t[i].y < t[j].y)
			{
				cnt++;
			}
		}
		t[i].r = cnt;
		cnt = 1;
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d ", t[i].r);
	}

	return 0;

}
