#include <stdio.h>
#pragma warning(disable:4996)

void main() {
	int number1 = 0, number2 = 0;
	int num = 1;
	printf("2^k <= n�� �� �� n�� �Է��ϼ���: ");
	scanf("%d", &number1);

	while (num < number1) {
		num = num * 2;
		num++;
		number2++;
	}
	printf("������ �����ϴ� �ִ� : %d", number2);
}