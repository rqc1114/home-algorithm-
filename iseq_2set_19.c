#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 100


int main(void) //풀이과정 노트 참조
{
	//atoi();
	//strcat();

	char A[N] = { 0 }, B[N] = { 0 }, C[N] = { 0 };
	int s = 0;

	scanf("%s", A);
	scanf("%s", B);
	scanf("%s", C);

	strcat(A, B);
	s += atoi(A);
	s += atoi(C);

	printf("%d\n", s);

	return 0;
}