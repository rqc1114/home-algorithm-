// 8+2+2 = 12(pg)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[11] = "Hello";
	strcat(s, "World");
	printf("%s \n", s);

	return 0;
}