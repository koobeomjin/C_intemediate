#include <stdio.h>

void main(){
	int num1=100, num2=100;
	int *pnum;
	
	pnum = &num1;
	(*pnum) += 30; 		// () <= �����ϱ� ���� ��ȣ���
						// pnum = pnum + 30 <= �ּҰ��� 30 ���ϴ� ��
	pnum = &num2;		// *pnum += 30 <= pnum �ּ��� ���� 30�� ���ϴ� ��
	(*pnum) -= 30;

	printf("num1: %d, num2: %d\n", num1, num2);
}
