#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int a[100];

int main() {
	int  i, j, k, n, m, min, max, temp, cnt;
	cnt = 0;

	scanf("%d %d", &n, &m);
	
	for (i = 0; i < n; i++) {
		a[i] = i + 1;
	}

	for (i = 0; i < m; i++) {
		scanf(" %d %d", &min, &max);
		for (j = min; j < max; j++) {
			for (k = min-1; k < max -1- cnt;k++) {
				temp = a[k];
				a[k] = a[k + 1];
				a[k + 1] = temp;
				
			}
			cnt++;
		}
		cnt = 0;
	}

	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}

	return 0;
}