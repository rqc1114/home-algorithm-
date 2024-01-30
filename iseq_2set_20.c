#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define N 50

int main(void)
{
	char string[N];
	int i;

	scanf("%s", string);

	for (i = 0; i < N; i++)
	{
		if (string[i] >= 'A' && string[i] <= 'Z')
		{
			if (string[i] = 'A')
				printf("*");
			else
				printf("%c", string[i]);
		}
		else
		{
			break;
		}
	}
	printf("\n");

	return 0;
}