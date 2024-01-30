#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	int n;
	int A[10];
	int t= 0;
	int r=0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}


	for (int i=0; i<n; i++)
	{
		if (i == 0)
		{
			r++;
		}

		if (A[i] == 0)
		{
			t = 0;
		}

		else
		{
			t++;
			r += t;
		}
	}


	printf("%d", r);

	return 0;
}
