#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char A[51];
	int n = 0, x=0, y=0, s =0;

	scanf("%s",A);

	n = strlen(A);

	for (int i = 0; i < n-1; i++)
	{
		if(A[i] == A[i+1])
		{
			y++;
		}

		else if(A[i] != A[i+1])
		{
			x++;
		}
	}

	s = 10 + 10 * x + 5 * y;

	printf("%d\n", s);

	return 0;
}