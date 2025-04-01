#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int a[30], b[30];

int main() {
	int  i, j, temp, reg[2], cnt;
	cnt = 0;

	for (i = 0; i < 28; i++) {
		scanf(" %d", &a[i]);
	}

	for (i = 0; i < 28; i++) {
		for (j = i; j < 28; j++) {
			if (a[i] > a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for (i = 0; i < 30; i++) {
		b[i] = i+1;
	}
	for (i = 0; i < 30; i++) {
		if (a[i] != b[i]) {
			reg[cnt] = b[i];
			for (j = 27+cnt; j >= i; j--) {
				a[j + 1] = a[j];
			}
			cnt++;
		}
	}
	for (i = 0; i < cnt; i++) {
		printf("%d\n", reg[i]);
	}

	return 0;
}