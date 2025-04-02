#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int len(char s[]) {
	int cnt, i;
	cnt = 0;

	for (i = 0; i < 101; i++) {
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
	char s_reg[1001][11], s[1001];
	int i, j, n, reg[1000];

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%s", s);
		for (j = 0; j < len(s);j++) {
			s_reg[j][i] = s[j];
		}
		reg[i] = len(s);
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < reg[i]; j++) {
			if (reg[i] == 1) {
				printf("%c%c", s_reg[j][i], s_reg[j][i]);
			}
			else if ((j == 0) | (j == (reg[i]-1))) {
				printf("%c", s_reg[j][i]);
			}
		}
		printf("\n");
	}

	return 0;
}