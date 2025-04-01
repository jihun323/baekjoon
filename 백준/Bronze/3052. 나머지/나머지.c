#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int a[10], b[10];

int main() {
	int  i, j, cnt, cnt_j, k, t;
	cnt = 0;
	cnt_j = 0;
	j = 0;
	for (i = 0; i < 10; i++) {
		scanf(" %d", &a[i]);
	}

	for (i = 0; i < 10; i++) {
		b[i] = a[i] % 42;
	}

	for (i = 0; i < 10-cnt; i++) {
		for (j = i+1; j < 10-cnt;) {
			if (b[i] == b[j]) {
				cnt++;
				for (k = j; k < 10-cnt; k++) {
					b[k] = b[k + 1];
				}
			}
			else {
				j++;
			}
		}
	}
	printf("%d", i);

	return 0;
}