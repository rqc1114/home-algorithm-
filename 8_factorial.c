#include <stdio.h>

int main(void)
{
	int fact = 1;
	int i, n;

	printf("input : ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		fact = fact * i;
	}

	printf("%d!�� %d�Դϴ�/\n", fact);

	return 0;
}