#include <stdio.h>

void main() {
	int arr[3] = {0,1,2};

	// 배열의 이름과 첫번째 요소를 나타내는 주소는 같다.
	printf("배열의 이름: %p\n", arr);
	printf("첫 번째 요소: %p\n", &arr[0]);
	printf("두 번째 요소: %p\n", &arr[1]);
	printf("세 번째 요소: %p\n", &arr[2]);

/*
 * 배열의 이름: 001AFDFC
 * 첫 번째 요소: 001AFDFC
 * 두 번째 요소: 001AFE00 <== int가 4byte이므로 앞의 주소값에서 4byte다음의 값
 * 세 번째 요소: 001AFE04
*/

}
