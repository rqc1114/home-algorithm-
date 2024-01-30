#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int height[55], weight[55];
	int n, i, j;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d %d", &height[i], &weight[i]);
	}

	for (i = 0; i < n; i++) {
		int rank = 1;
		for (j = 0; j < n; j++) {
			if (height[i] < height[j] && weight[i] < weight[j]) {
				rank++;
			}
		}
		printf("%d ", rank);
	}

	return 0;
}