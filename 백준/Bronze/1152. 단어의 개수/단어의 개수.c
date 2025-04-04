#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char s[1000002];

int len(char s[]) {
	int i, cnt;
	cnt = 0;
	
	for (i = 0; i < 1000002; i++) {
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
	int cnt, i, p;
	cnt = 1;
	
	gets(s);
	p = len(s);
	for (i = 0; i < p; i++) {
		if (s[i] == ' ') {
			cnt++;
		}
	}
	if ((s[0] == ' ') & (s[p - 1] == ' ')) {
		cnt = cnt - 2;
	}
	else if ((s[0] == ' ') | (s[p - 1] == ' ')) {
		cnt = cnt - 1;
	}

	printf("%d", cnt);

	return 0;
}