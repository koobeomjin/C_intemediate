#include <stdio.h>

void main(){
	int num=7;
	double *pnum;

	// ����Ʈ ������ ���� ���� Ÿ�Կ� ������ �ּҸ� �Ҵ��� �����ϴ�.
	// ��Ȳ�� ���� �پ��� ������ �߻��Ѵ�.
	*pnum = &num;

	printf("num: %d\n", *pnum);
	printf("*pnum: %llf\n", *pnum);
}
