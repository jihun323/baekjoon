#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int n, i, j, cnt;

	cnt = 1;

	scanf("%d", &n);

	for (i = 0; i < (2 * n) - 1; i++) {
		if (i < n) {
			for (j = 1; j < (2 * n); j++) {
				if ((j >= (n - i)) & (j <= (n + i))) {
					printf("*");
				}
				else if(j<(n-i)){
					printf(" ");
				}
			}
		}
		else
		{
			cnt++;
			for (j = 1; j < (2 * n); j++) {
				if ((j >= cnt) & (j <= (2 * n - cnt))) {
					printf("*");
				}
				else if(j<cnt){
					printf(" ");
				}
			}
		}
		if (i == (2 * n) - 2) {
			break;
		}
		printf("\n");
	}

	return 0;
}