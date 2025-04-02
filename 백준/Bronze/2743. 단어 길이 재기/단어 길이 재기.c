#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char s[101];
	int i, cnt;
	cnt = 0;

	scanf("%s", s);

	for (i = 0; i < 101; i++) {
		if (s[i] == '\0') {
			break;
		}
		else {
			cnt++;
		}
	}

	printf("%d", cnt);

	return 0;
}