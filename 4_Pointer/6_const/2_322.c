#include <stdio.h>

void main(){
	int num1=20;
	int num2=30;
	int* const ptr=&num1;
	const int* const ptr2 = &num1;
	*ptr=40;				//ptr �ּҿ��� ����Ű�� �� ���� ����
	ptr=&num2;				//ptr �ּ� ���� �Ұ���

	*ptr2=40;
	ptr2=&num2;
}
