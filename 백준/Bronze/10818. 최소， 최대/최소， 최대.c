#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int a[1000000];

int main() {
	int n, i, max, min;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf(" %d", &a[i]);
	}
	max = a[0];
	min = a[0];
	for (i = 0; i < n; i++) {
		if (max<a[i]) {
			max = a[i];
		}
		else if (a[i] < min) {
			min = a[i];
		}
	}
	printf("%d %d", min, max);

	return 0;
}