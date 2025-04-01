#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int a[100], b[100], c[100], d[100];

int main() {
	int n, m, i, j, cnt, max;
	scanf("%d %d", &n, &m);

	for (i = 0; i < m; i++) {
		scanf(" %d %d %d", &a[i], &b[i], &c[i]);
	}
	for (i = 0; i < m; i++) {
		for (j = (a[i]-1); j <= (b[i] -1); j++) {
			d[j] = c[i];
		}
	}
	for (i = 0; i < n; i++) {
		printf("%d ", d[i]);
	}

	return 0;
}