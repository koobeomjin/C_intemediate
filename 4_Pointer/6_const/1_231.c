#include <stdio.h>

void main(){
	int num=20;
	int num2=30;
	const int* ptr=&num;
	num=40;
	ptr=&num2;	// ptr�� �ּҰ� ������ ����
	*ptr=30;	// ptr �ּҰ��� ����Ű�� ���� �����ϴ� ���� �Ұ���
}
