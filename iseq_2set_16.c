#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 50


int main(void)
{
	char string[N] = { 0 };

	scanf("%s",string);
	
	printf("%c %d\n", string[2], string[2]);


	return 0;
}