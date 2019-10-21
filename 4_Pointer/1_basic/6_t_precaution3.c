#include <stdio.h>

void main(){
	int num=7;
	double *pnum;

	// 포인트 변수는 같은 변수 타입에 변수의 주소만 할당이 가능하다.
	// 상황에 따라 다양한 에러가 발생한다.
	*pnum = &num;

	printf("num: %d\n", *pnum);
	printf("*pnum: %llf\n", *pnum);
}
