#include <stdio.h>

void main() {
	int arr[3] = {0,1,2};

	// �迭�� �̸��� ù��° ��Ҹ� ��Ÿ���� �ּҴ� ����.
	printf("�迭�� �̸�: %p\n", arr);
	printf("ù ��° ���: %p\n", &arr[0]);
	printf("�� ��° ���: %p\n", &arr[1]);
	printf("�� ��° ���: %p\n", &arr[2]);

/*
 * �迭�� �̸�: 001AFDFC
 * ù ��° ���: 001AFDFC
 * �� ��° ���: 001AFE00 <== int�� 4byte�̹Ƿ� ���� �ּҰ����� 4byte������ ��
 * �� ��° ���: 001AFE04
*/

}
