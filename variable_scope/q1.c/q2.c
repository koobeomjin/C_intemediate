#include <stdio.h>
#pragma warning(disable:4996)

void main(){
	int number1 = 0;
	int number2 = 0;
	int num = 0;

	times_print(number1, number2, num);
}

int times_print(number1, number2, num){
	printf("정수 2개를 입력하세요: ");
	scanf("%d %d", &number1, &number2);

	if(number1 > number2){
		while(number2 < number1+1){
		num = 1;

		while(num < 10){
			printf("%d * %d = %d\n", number2, num, number2*num);
			num++;
		}
		number2++;
		printf("\n");
		}

	}else{
	
		while(number1 < number2+1){
		num = 1;

		while(num < 10){
			printf("%d * %d = %d\n", number1, num, number1*num);
			num++;
		}
		number1++;
		printf("\n");
		}
	}
	return 0;
}
