#include <stdio.h>

void main(){
	int num=7;
	int *pnum; 				// *pnum <= �ּҰ�
	pnum = &num;			// int�� ���� ǥ���ϴ� �ּҰ�

	printf("num: %d\n", num);
	// %p�� �ּҰ��� ����ϱ� ���� �ɼ�
	// �Ϲ� ������ �����ϰ� �ش� ������ �ּҰ��� ������
	// &[������]
	// ex) int num=7; => &num
	printf("&num: %p\n", &num);

	// ������ ������ �����ϰ� �ش� ������ �ּҰ��� ������
	// �ش� ������ ����ϸ� �ȴ�.
	// ex) int *pnum; => pnum
	printf("pnum: %p\n", pnum);
	// ������ ������ ����Ű�� ���� ǥ���Ϸ���
	// *[������] ���� �����ؾ� �Ѵ�.
	printf("pnum�� ����Ű�� ��: %d\n",*pnum);

	/* ��°��
  	num: 7
	&num: 0028F8A8
	pnum: 0028F8A8
	*/
}
