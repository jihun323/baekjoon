#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int a[100], b[100], c[100];

int main() {
	int n, m, i, j, temp;
	scanf("%d %d", &n, &m);

	for (i = 0; i < m; i++) {
		scanf(" %d %d", &a[i], &b[i]);
	}

	for (i = 0; i < n; i++) {
		c[i] = i + 1;
	}

	for (i = 0; i < m; i++) {
		temp = c[a[i] - 1];
		c[a[i] - 1] = c[b[i] - 1];
		c[b[i] - 1] = temp;
	}
	for (i = 0; i < n; i++) {
		printf("%d ", c[i]);
	}

	return 0;
}