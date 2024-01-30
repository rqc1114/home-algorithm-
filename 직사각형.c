#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int A[4][8];

int f()
{
	int x;


	if (1)
	{

		x = 1;
	}

	else if (2)
	{
		x = 2;
	}

	else if (3)
	{
		x = 3;
	}

	else if (4)
	{
		x = 4;
	}

	return x;
}


int main(void)
{
		/*3 10 50 60 100 100 200 300
		45 50 600 600 400 450 500 543
		11 120 120 230 50 40 60 440
		35 56 67 90 67 80 500 600*/

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}

	for (int i = 0; i < 4; i++)
	{
		printf("%d",f());
	}

	return 0;
}
