#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int condition = 1;

	if (condition) {
		int number = 0;
		printf("if���� �������� number �ʱⰪ: %d\n", number);
		number = number + 10;
		if (number == 10) {
			int number2 = 0;
			printf("if-if���� �������� number2 �ʱⰪ: %d\n", number2);
			number2 = number2 + 5;
			printf("number2 ���� �� ���� ��: %d\n", number2);
			// ���� scope���� ���� scope ���� ������ ����
			printf("number ���� �� ���� ��: %d\n", number);
		}
		printf("number ���� �� ���� ��: %d\n", number);
		// ���� scope���� ���� scope ���� ������ �Ұ���
		//printf("number2 ���� �� ���� ��: %d\n", number2);
		}
	// �Ʒ� number�� if �ȿ� ���� scope������ ������ �����ϱ�
	// ������ ������ ������ �߻��Ѵ�.
	//printf("���� number ��: %d\n", number);
}