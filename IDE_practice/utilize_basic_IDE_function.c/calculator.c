#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	char my_calculation_option;
	int calculation_result = 0;
	int number1, number2;

	printf("===== 사칙연산 계산기 ver2 =====\n");
	printf("원하는 연산을 한 가지 선택하세요 (ex: +,-,*,/) : ");
	// scanf_s()는 scanf의 보안상 취약점을 보완하기 위해 나온 함수이다.
	// scanf와 사용법은 동일하며 마지막에 사용한 타입의 크기를 인자로
	// 추가로 전달해 주어야 한다.
//	scanf_s("%c", &my_calculation_option, sizeof(my_calculation_option));

	//scanf를 사용하기 위해서는
	// 프로젝트 설정(Alt+Enter) - 구성 속성 - C/C++ - 전처리기 정의
	// 마지막에 ; 넣고 _CRT_SECURE_NO_WARNINGS <- 내용을 추가
	// 또는 프로그램 헤데 선언 다음에 아래 코드 추가
	// #pragma warning (disable:4996)
	scanf("%c", &my_calculation_option);

	printf("두 수를 입력하세요(ex 3 4): ");
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