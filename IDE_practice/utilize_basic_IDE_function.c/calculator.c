#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	char my_calculation_option;
	int calculation_result = 0;
	int number1, number2;

	printf("===== ��Ģ���� ���� ver2 =====\n");
	printf("���ϴ� ������ �� ���� �����ϼ��� (ex: +,-,*,/) : ");
	// scanf_s()�� scanf�� ���Ȼ� ������� �����ϱ� ���� ���� �Լ��̴�.
	// scanf�� ������ �����ϸ� �������� ����� Ÿ���� ũ�⸦ ���ڷ�
	// �߰��� ������ �־�� �Ѵ�.
//	scanf_s("%c", &my_calculation_option, sizeof(my_calculation_option));

	//scanf�� ����ϱ� ���ؼ���
	// ������Ʈ ����(Alt+Enter) - ���� �Ӽ� - C/C++ - ��ó���� ����
	// �������� ; �ְ� _CRT_SECURE_NO_WARNINGS <- ������ �߰�
	// �Ǵ� ���α׷� �쵥 ���� ������ �Ʒ� �ڵ� �߰�
	// #pragma warning (disable:4996)
	scanf("%c", &my_calculation_option);

	printf("�� ���� �Է��ϼ���(ex 3 4): ");
//	scanf_s("%d %d", &number1, &number2);
	scanf("%d %d", &number1, &number2);

	switch (my_calculation_option){
		case '+':
			calculation_result = number1 + number2;
			break;
		case '-':
			calculation_result = number1 - number2;
			break;
		case '*':
			calculation_result = number1 * number2;
			break;
		case '/':
			calculation_result = number1 / number2;
			break;
	}
	printf("%d %c %d = %d", number1, my_calculation_option, number2, calculation_result);
}