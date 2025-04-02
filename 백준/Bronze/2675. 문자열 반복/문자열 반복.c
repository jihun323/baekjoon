#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int len(char s[]) {
	int i, cnt;
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
	int n, i, j, k, r[9], len_n[1001];
	char reg[21][1001], s[21];
	
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf(" %d %s", &r[i], s);
		for (j = 0; j < len(s); j++) {
			reg[j][i] = s[j];
		}
		len_n[i] = len(s);
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < len_n[i]; j++) {
			for (k = 0; k < r[i]; k++) {
				printf("%c", reg[j][i]);
			}
		}
		printf("\n");
	}

	return 0;
}