#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n[5], r[5], h, t, o, i, j;

	for (i = 0; i < 2; i++) {
		scanf(" %d", &n[i]);
		o = (n[i] / 100);
		t = (n[i] % 100) / 10 * 10;
		h = (n[i] % 10) * 100;
		r[i] = h + t + o;
	}

	if (r[0] > r[1]) {
		printf("%d", r[0]);
	}
	else {
		printf("%d", r[1]);
	}

	return 0;
}