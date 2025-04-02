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
	int n, i, j;
	char s[101];

	scanf("%s", s);

	for (i = 0; i < 26; i++) {
		for (j = 0; j < len(s); j++) {
			if (s[j] == 'a' + i) {
				printf("%d ", j);
				break;
			}
			else if (j == (len(s) - 1)) {
				printf("-1 ");
				break;
			}
		}
	}

	return 0;
}