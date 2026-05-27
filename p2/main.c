#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	int num1[20];
	int num2[20];
	int sum = 0;
	for (int* p = num1; p < num1 + N; p++) {
		scanf("%d", p);
	}
	for (int* q = num2; q < num2 + N; q++) {
		scanf("%d", q);
	}
	int* p = num1;
	int* q = (num2 + (N-1)); //num2 맨끝 주소
	for (int* p = num1; p < num1 + N; p++) {
        sum = *p + *q; //p의 위치 + q의 위치
		q--;// q를 num2의 맨끝주소부터 시작하기 떄문에 포인트 변수를 1씩 뺴서 주소에 -1을 하며 역순으로 가도록
		printf(" %d", sum);
	}
}
