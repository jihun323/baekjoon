#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c, i, d[1000];

	scanf("%d", &a);

	for (i = 0; i < a; i++) {
		scanf(" %d %d", &b, &c);
		d[i] = b + c;
	}

	for (i = 0; i < a; i++) {
		printf("%d\n", d[i]);
	}

	return 0;
}