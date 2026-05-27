#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	int num1[20];
	int num2[20];
	int sum = 0;
	for (int* p = num1; p < num1 + N; p++) {
		scanf(" %d", p);
	}
	for (int* q = num2; q < num2 + N; q++) {
		scanf(" %d", q);
	}
	int* p = num1;
	int* q = num2;
	for (int i = 0; i < N; i++) {
		sum = *(p + i) + *(q + N - 1 - i);
		printf(" %d", sum);
	}
}
