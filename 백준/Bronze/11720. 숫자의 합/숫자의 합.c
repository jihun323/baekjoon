#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int n, i, sum, reg;
	char c[101];
	sum = 0;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf(" %c", &c[i]);
		sum += (int)c[i]-'0';
	}
		
	printf("%d", sum);

	return 0;
}