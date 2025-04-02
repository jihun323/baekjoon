#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double a[1001];

int main() {
	int  i, j, n;
	double avg, sum, temp;
	sum = 0;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf(" %lf", &a[i]);
	}

	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
	
	for (i = 0; i < n; i++) {
		sum += (a[i] / a[n - 1]) * 100.0;
	}

	avg = sum / n;


	printf("%.3lf", avg);
	return 0;
}