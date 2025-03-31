#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int A, B;

	scanf("%d %d", &A, &B);

	if ((A == 0)&(B<45)) {
		A += 24;
	}


	printf("%d %d", (((A * 60) + (B)) - 45) / 60, (((A * 60) + (B)) - 45) % 60);
		

	return 0;
}