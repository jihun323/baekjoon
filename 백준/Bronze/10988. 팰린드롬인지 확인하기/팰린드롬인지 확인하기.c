#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char s[1000];

int len(char s[]) {
	int i, cnt;
	cnt = 0;

	for (i = 0; i < 1000; i++) {
		if (s[i] == '\0') {
			break;
		}
		else {
			cnt++;
		}
	}
	return cnt;
}

int main() {
	int n, i, cnt;
	cnt = 0;
	
	scanf("%s", s);
	n = len(s);
	if (n == 1) {
		printf("1");
		return 0;
	}

	for (i = 0; i < n/2; i++) {
		if (s[i] == s[(n-1) - i]) {
			cnt++;
			if (cnt == (n/2)) {
				printf("1");
			}
		}
		else {
			printf("0");
			break;
		}
	}

	return 0;
}