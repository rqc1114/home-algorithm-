// 8+2+2 = 12(pg)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[80];
	char s2[80];
	int result;

	printf("첫 번째 단어를 입력하시오:");
	scanf_s("%s", s1, sizeof(s1));

	printf("두 번째 단어를 입력하시오:");
	scanf_s("%s", s2, sizeof(s2));

	result = strcmp(s1, s2);

	if (result < 0)
		printf("%s가 %s보다 앞에 있습니다.\n", s1, s2);
	else if (result == 0)
		printf("%s가 %s와 같습니다.\n", s1, s2);
	else
		printf("%s가 %s보다 뒤에 있습니다.\n", s1, s2);

	return 0;
}