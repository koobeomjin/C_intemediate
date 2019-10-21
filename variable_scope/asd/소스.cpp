#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int number[5];
	int idx = 0;
	int min, max, sum;
	int length;

	length = sizeof(number) / sizeof(int);

	for (; idx < length; idx) {
		printf("%d 번째 정수를 입력하세요: ", idx + 1);
		scanf("%d", &number[idx]);
		sum = sum + number[idx];
	}
	max = number[0];
	min = number[0];

	for(idx=0;)
}
