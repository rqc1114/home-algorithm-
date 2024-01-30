// 8+2+2 = 12(pg)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char src[6] = "Hello";
	char dst[6];

	strcpy(dst, src);

	printf("복사된 문자열 = %s \n", dst);


	char src2[] = "Hello";
	char dst2[6];

	strncpy(dst2, src2, 6);

	printf("복사된 문자열2 = %s\n", dst2);

	return 0;
}