#include <stdio.h>

int main(){
	char ch[10];
	char countMax = 0;
	int frequency = 0;
	char chMax = *ch;
	for (char* p = ch; p < ch + 10; p++) {
		scanf(" %c", p);
	}

	for (char* p = ch; p < ch + 10; p++) {
		frequency = 0;
		for (char* q = ch; q < ch + 10; q++) {
			if (*p == *q) {
				frequency++;
			}
		}

		if (frequency > countMax) {
			countMax = frequency;
			chMax = *p;
		}
	}
	printf("%c %d", chMax, countMax);

	return 0;
}
