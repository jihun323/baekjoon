#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int w[10], i;
	int b[10] = { 1, 1, 2, 2, 2, 8 };

	for (i = 0; i < 6; i++) {
		scanf("%d", &w[i]);
	}

	for (i = 0; i < 6; i++) {
		w[i] = b[i] - w[i];
		printf("%d ", w[i]);
	}

	return 0;
}