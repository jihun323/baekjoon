#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i, j, cnt, len_n[11000];
	char s;
	cnt = 0;

	while ((len_n[cnt] = getchar()) != EOF) {
		cnt++;
	}

	for (i = 0; i < cnt; i++) {
		printf("%c", len_n[i]);
	}

	return 0;
}