#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int A, B;
	double C;

	scanf("%d %d", &A, &B);
	C = (double)A / (double)B;

	printf("%.9lf", C);
	return 0;
}