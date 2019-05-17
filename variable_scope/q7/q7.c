#include <stdio.h>
#pragma warning(disable:4996)

void main() {
	int number1 = 0, number2 = 0;
	int num = 1;
	printf("2^k <= n의 식 중 n을 입력하세요: ");
	scanf("%d", &number1);

	while (num < number1) {
		num = num * 2;
		num++;
		number2++;
	}
	printf("공식을 만족하는 최댓값 : %d", number2);
}